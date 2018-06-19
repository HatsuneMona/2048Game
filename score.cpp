#include "moeneko.h"

using namespace std;

/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：分数计算器  int fun_score(int cycle, int add_score, int score)
.					作用：计算分数。
.					输入值：1.主程序运算次数      2.由play所导出的需要加的分数        3.原分数
.					类型：int
.					返回值：  score，分数。

*//////////////////////////////////////////////////////////////////////////////
int fun_score(int cycle, int add_score, int score) {
	if (add_score != -1) {
		if (cycle > 0) {
			score += add_score;
		}
		else {
			score = 0;
		}
	}
	return score;
}