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

.			函数	名称：随机数产生器 suiji()
.					作用：随机数产生器。
.					输入值：给定一个上限值，或者给定上限下限值。
.					类型：int
.					返回值：给定范围的随机数。

*//////////////////////////////////////////////////////////////////////////////
int suiji(int b) {
	b++;
	int temp;
	temp = rand();
	return temp % b;
}

int suiji(int a, int b) {
	int temp;
	b++;
	while (1) {
		temp = rand();
		if (temp % b >= a) {
			break;
		}
	}
	return temp % b;
}



/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：二或四随机生成器 torf()	实际上是twoorfour的缩写
.					作用：随机生成  2  或者  4  。
.					输入值：无
.					类型：int
.					返回值：2或者4。

*//////////////////////////////////////////////////////////////////////////////
int torf() {
	if (suiji(1) == 1) {
		return 2;
	}
	else {
		return 4;
	}
}


/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：方格随机选择器   putin(int(*a)[4],int quantity)
.					作用：随机指定4*4区域内的一个方格，并且判断方格是否为空，如果为空，则输入2或者4
.					输入值：1.指定的4*4的方格		2.要指定输入的方格的数量
.					类型：int
.					返回值：随机产生的数的值。

*//////////////////////////////////////////////////////////////////////////////
int putin(int(*a)[4], int quantity) {
	int x, y, j;
	for (j = 1; j <= quantity; j++) {
		while (1) {
			x = suiji(4);
			y = suiji(4);
			if (a[y][x] == 0) {
				a[y][x] = torf();
				return a[y][x];
			}
		}
	}
}
