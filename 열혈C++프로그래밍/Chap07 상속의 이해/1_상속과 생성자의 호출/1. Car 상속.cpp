#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gasGauge_in)
		:gasolineGauge(gasGauge_in)
	{}

	int getGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gas_in, int elecGauge_in)
		:Car(gas_in), electricGauge(elecGauge_in)
	{}

	int getElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water)
		:HybridCar(gas, elec), waterGauge(water)
	{}

	void showCurrentGauge()
	{
		cout << "잔여 가솔린: " << getGasGauge() << endl;
		cout << "잔여 전기량: " << getElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main()
{
	HybridWaterCar car(30, 100, 150);
	car.showCurrentGauge();

	return 0;
}