#pragma once

int suiji(int b);//产生  x<b  的随机数x
int suiji(int a, int b);//产生  a<x<b  范围的随机数x
int torf();//随机产生2或者4的数
void displayout(int a[][4], int clean);
void putin(int(*a)[4], int quantity);
bool gameoverleft(int(*a)[4]);
bool gameoverup(int(*a)[4]);
void up(int(*a)[4]);
void down(int(*a)[4]);
void left(int(*a)[4]);
void right(int(*a)[4]);
void xtoy(int(*a)[4]);
void xtox(int(*a)[4]);
void ytoy(int(*a)[4]);
bool gameover(int(*a)[4]);