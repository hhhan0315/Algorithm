#include <iostream>
using namespace std;

class Calculator
{
private:
	int m_add;
	int m_min;
	int m_mul;
	int m_div;
public:
	double Add(double a, double b)
	{
		m_add++;
		return a + b;
	}
	double Min(double a, double b)
	{
		m_min++;
		return a - b;
	}
	double Mul(double a, double b)
	{
		m_mul++;
		return a * b;
	}
	double Div(double a, double b)
	{
		m_div++;
		return a / b;
	}
	void Init()
	{
		m_add = 0, m_min = 0, m_mul = 0, m_div = 0;
	}
	void ShowOpCount()
	{
		cout << "µ¡¼À: " << m_add << " »¬¼À: " << m_min << " °ö¼À: " << m_mul << " ³ª´°¼À: " << m_div << endl;
	}
};


int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;
}