#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)	// Á¡ÀÇ ÁÂÇ¥ ÀÌµ¿
	{
		xpos += x;
		ypos += y;
	}
	void AddPoint(const Point& pos)	// Á¡ÀÇ ÁÂÇ¥ Áõ°¡
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
	void ShowPosition()	// ÇöÀç ÁÂÇ¥ Ãâ·Â
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

int main()
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();

	return 0;
}