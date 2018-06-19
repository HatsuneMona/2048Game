#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库
//#include <windows.h>//

#include "moeneko.h"//函数声明

using namespace std;

/*/////////////////////////////////////////////////////////////////////////////
		
.			函数	名称：主函数main()
.					作用：程序入口。
.					输入值：五
.					类型：int
.					返回值：正确运行为“0”。

*//////////////////////////////////////////////////////////////////////////////
int main(){
	srand(time(0));//为后续的随机函数   设定随机数种子

	int a[4][4] = { 0 };//正式数据
	int last[4][4];
	int cycle = 0;
	int score = 0;
	int add_score = 0;
	char wasd;

	putin(a, suiji(2, 3));//初始化游戏数据(给出初始值）

	while (1){
		if (cycle > 0) {
			_getch();//清空键盘缓存区
		}

		score = fun_score(cycle, add_score, score);

		if (gameover(a)) {
			displayout(a, 0);
			cout << endl;
			cout << "游戏结束，请按任意键退出" << endl;
			_getch();
			break;
		}
		else {
			displayout(a, 0);
			cout << endl << score << endl;
		}

	wasd_wrong:;//在64行
		cout << endl << "请输入wasd代表方向" << endl;
		wasd = _getch();
		switch (wasd) {
		case ('w'):add_score = up(a); break;
		case ('a'):add_score = left(a); break;
		case ('s'):add_score = down(a); break;
		case ('d'):add_score = right(a); break;
		default:
			cout << "输入错误，请输入“w”“a”“s”“d”" << endl;
			_getch();
			goto wasd_wrong;//在54行
			break;
		}

		putin(a, 1);

		cycle++;
	}
	return 0;
}

