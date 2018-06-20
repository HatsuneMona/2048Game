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
	int a[4][4] = { 0 };
	int cycle = 0;
	int score = 0;
	int add_score = 0;
	putin(a, suiji(2, 3));//初始化游戏数据(给出初始值）
	while (1){
		score = fun_score(cycle, add_score, score);
		if (gameover(a)) {
			displayout(a, score, 0);
			cout << endl;
			cout << "游戏结束，请按“回车”键退出" << endl;
			getchar();
			break;
		}
		displayout(a, score, 0);
		add_score = game_input(a, cycle);
		if (add_score != -1) {
			putin(a, 1);
		}
		cycle++;
	}
	return 0;
}