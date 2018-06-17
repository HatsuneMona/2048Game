#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库
//#include <windows.h>//

#include "moeneko.h"

using namespace std;

int fun_score(int a[][4], int *cycle, int last[][4]) {
	int score = 0;
	int last_score = 0;
	int x, y;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			last_score += a[y][x];
		}
	}
	if (cycle > 0) {
		score += last_score;
	}
	return score;
}