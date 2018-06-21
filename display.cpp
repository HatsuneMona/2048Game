

#include "moeneko.h"//函数声明

using namespace std;

/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：显示器 displayout(int a[][4], int score, int clean)
.					作用：分行显示二维数组的内容。
.					输入值：1.需要输出的数组。		2.当前游戏分数        3.是否清空屏幕（0为清空）
.					类型：void
.					返回值：无。

*//////////////////////////////////////////////////////////////////////////////
void displayout(int a[][4], int score, int clean) {
	int num;
	HANDLE hOut;
	//  获取输出流的句柄
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (clean == 0) {
		system("CLS");
	}
	else if (clean == 1) {}
	else {
		cout << "clean参数错误" << endl;
		goto close;
	}
	int i, j; 
	SetConsoleTextAttribute(hOut,
		FOREGROUND_RED |        // 前景色_红色
		BACKGROUND_GREEN);      // 背景色_绿色

	cout << "********************************************" << endl;
	cout << "***************2 0 4 8 游 戏****************" << endl;
	cout << "********************************************" << endl;
	SetConsoleTextAttribute(hOut,
		FOREGROUND_RED |        // 前景色_红色
		BACKGROUND_BLUE |
		BACKGROUND_GREEN);      // 背景色_浅蓝色
	cout << "   +--------+--------+--------+--------+    " << endl;
	for (i = 0; i <= 3; i++) {
		cout << "   |        |        |        |        |    " << endl;
		cout << "   |";
		for (j = 0; j <= 3; j++) {
			if (j > 0) {
				cout << "|";
			}
			if (a[i][j] != 0) {
				cout << setw(5) << a[i][j];
			}
			else {
				cout << "     ";
			}
			cout << "   ";
		}
		cout << "|    " << endl;
		cout << "   |        |        |        |        |    " << endl;
		cout << "   +--------+--------+--------+--------+    " << endl;
	}
	SetConsoleTextAttribute(hOut,
		FOREGROUND_RED |        // 前景色_红色
		FOREGROUND_INTENSITY |
		BACKGROUND_GREEN | BACKGROUND_RED);//背景色_黄色
	cout << "                                            " << endl;
	cout << "你获得的分数是：" << setw(6) << score << "                      " << endl;
	cout << "                                            " << endl;
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
close:;
}
