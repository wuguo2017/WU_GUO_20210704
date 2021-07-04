#include <iostream>
using namespace std;
struct point
{
	int x, y;
};

class graph
{
public:
	graph(int input_nodes[3][2], int input_edges[30][2], char input_mark[30])    //构造函数
	{
		int length = 3;
		for(int k = 0; k < length; k++)
		{
			nodes[k].x = input_nodes[k][0];
			nodes[k].y = input_nodes[k][1];

		}
		int length2 = 30;
		for(int j = 0; j < length2; j++)
		{
			edges[j].x = input_edges[j][0];
			edges[j].y = input_edges[j][1];
			mark[j] = input_mark[j];
			//cout << edges[j].x << ':' << edges[j].y << ',';
		}
		
	}
	~graph(){}

	void shownodes();  //show node or each person
	void showedges();  //show edges or each person

private:
	struct point nodes[3];   //3 nodes
	struct point edges[30];   //3 edges
	char mark[30];
};

void make_frame();  //打印框架的函数