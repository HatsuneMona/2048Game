﻿#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库
//#include <windows.h>//

#include "moeneko.h"//函数声明

using namespace std;



/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：显示器 displayout()
.					作用：分行显示二维数组的内容。
.					输入值：1.需要输出的数组。		2.是否清空屏幕（0为清空）
.					类型：void
.					返回值：无。

*//////////////////////////////////////////////////////////////////////////////
void displayout(int a[][4], int clean) {
	if (clean == 0) {
		system("CLS");
	}
	else if (clean == 1) {}
	else {
		cout << "clean参数错误" << endl;
		goto close;
	}
	int i, j;
	cout << endl;
	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 3; j++) {
			cout << setw(5) << a[i][j] << "   ";
		}
		cout << endl;
	}
close:;
}