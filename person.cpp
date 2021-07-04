# include <iostream>
# include <Windows.h>
# include <time.h>
# include "person.h"
using namespace std;
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ���
void gotoxy(HANDLE hOut, int x, int y)   //���λ�õĺ���
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hOut, pos);
}

void graph::shownodes()
{
	int length = 3;
	int x = 0,y = 0;
	for (int i = 0; i <length; i++)
	{
		x = nodes[i].x;
		y = nodes[i].y;
		gotoxy(hOut, x, y);   //ͬ��
		cout << '*';
	}
}

void graph::showedges()
{
	int len_nodes = 30;
	int x = 0, y = 0;

	for (int j = 0; j <len_nodes; j++)
	{
		x = edges[j].x;
		y = edges[j].y;
		gotoxy(hOut, x, y);   //ͬ��
		cout << mark[j];
	}
}
