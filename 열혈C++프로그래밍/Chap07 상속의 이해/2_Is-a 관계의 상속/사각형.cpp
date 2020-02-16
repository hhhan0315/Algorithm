#include <iostream>
using namespace std;

class Rectangle
{
private:
	int x;
	int y;
public:
	Rectangle(int x_in, int y_in)
		:x(x_in), y(y_in)
	{}
	void ShowAreaInfo()
	{
		cout << "면적: " << x * y << endl;
	}
};

class Square : public Rectangle
{
private:
	int x;
public:
	Square(int x_in)
		:Rectangle(x_in, x_in)
	{}

};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}