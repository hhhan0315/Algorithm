#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y)
		:xpos(x), ypos(y)
	{}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point center;
	int rad;
public:
	Circle(int x, int y, int r)
		:center(x,y),rad(r)
	{}
	void ShowCircleInfo() const
	{
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle InnerCircle;
	Circle OutterCircle;
public:
	Ring(int x1, int y1, int r1, int x2, int y2, int r2)
		:InnerCircle(x1, y1, r1), OutterCircle(x2, y2, r2)
	{}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		InnerCircle.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		OutterCircle.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}
