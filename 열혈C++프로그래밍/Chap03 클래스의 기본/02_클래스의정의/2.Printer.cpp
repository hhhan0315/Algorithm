#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
	string m_str;
	
public:
	void SetString(const string& str)
	{
		m_str = str;
	}
	void ShowString()
	{
		cout << m_str << endl;
	}
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love c++");
	pnt.ShowString();
	
	return 0;
}