
#include <iostream>
# include <Windows.h>
# include "person.h"

using namespace std;

void main()
{
	char Humpy_mark[30];
	char Dumpty_mark[30];
	int Humpy_nodes[3][2] = { { 5, 4 }, { 7, 20 }, { 9, 9 } };
	int Humpy_edges[30][2];
	int Dumpty_nodes[3][2] = { { 5, 41 }, { 7, 21 }, { 9, 26 } };
	int Dumpty_edges[30][2];
	int timestep = 1;


    //Humpy_edges initialized
	int x = 4;
	int y = 4;
	for (int i = 1; i <= 30; i++)
	{
		if (i <= 15)
		{
			y += timestep;
			Humpy_mark[i-1] = 'H';
			Humpy_edges[i - 1][0] = x+1;
			Humpy_edges[i - 1][1] = y;
		}
		else
		{
			if (i <= 20)
			{
				x += timestep;
				Humpy_mark[i-1] = 'C';
				Humpy_edges[i - 1][0] = x;
				Humpy_edges[i - 1][1] = y+1;
			}
			else
			{

				y -= timestep;
				Humpy_mark[i-1] = 'H';
				Humpy_edges[i - 1][0] = x;
				Humpy_edges[i - 1][1] = y+1;
			}
		}

	}

	//Dumpty_edges initialized
	x = 4;
	y = 41;
	for (int j = 1; j <= 30; j++)
	{
		if (j <= 20)
		{
			y -= timestep;
			Dumpty_mark[j - 1]='D';
			Dumpty_edges[j - 1][0] = x+1;
			Dumpty_edges[j - 1][1] = y;
		}
		else 
		{
			if (j <= 25)
			{
				x += timestep;
				Dumpty_mark[j-1] = 'C';
				Dumpty_edges[j - 1][0] = x;
				Dumpty_edges[j - 1][1] = y-1;
			}
			else
			{
				y += timestep;
				Dumpty_mark[j-1] = 'D';
				Dumpty_edges[j - 1][0] = x;
				Dumpty_edges[j - 1][1] = y-1;
			}
		}
	}

	graph Humpy(Humpy_nodes, Humpy_edges, Humpy_mark);
	graph Dumpty(Dumpty_nodes, Dumpty_edges, Dumpty_mark);
	cout << "Print Graph of depature" << endl;
	cout << "* stands of Home node, tunnel node and office node" << endl;
	cout << "H stands of route mark of Humpy and D stands of route mark of Dumpty" << endl;
	cout << "C stands of tunnel" << endl;
	Humpy.shownodes();
	Dumpty.shownodes();
	Humpy.showedges();
	Dumpty.showedges();
}