#include "moeneko.h"//函数声明

using namespace std;

/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏键入器   void game_input(int(*a)[4])
.					作用：判断游戏输入，并指向PLAY游戏相关函数
.					输入值：1.主函数的4*4的数组      2.循环次数cycle
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int game_input(int(*a)[4], int cycle) {
	if (cycle > 0) {
		_getch();//清空键盘缓存区
	}
	char wasd;
	int add_score = 0;
wasd_wrong:;//在36行
	cout << "请输入wasd代表方向" << endl;
	wasd = _getch();
	switch (wasd) {
	case ('w'):add_score = up(a); break;
	case ('a'):add_score = left(a); break;
	case ('s'):add_score = down(a); break;
	case ('d'):add_score = right(a); break;
	default:
		cout << "输入错误，请输入“w”“a”“s”“d”" << endl;
		_getch();
		goto wasd_wrong;//在25行
		break;
	}
	return add_score;
}