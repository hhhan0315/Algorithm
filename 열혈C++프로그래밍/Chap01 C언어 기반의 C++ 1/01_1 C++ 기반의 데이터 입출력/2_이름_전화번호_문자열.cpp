#include <iostream>

int main()
{
	using namespace std;
	char name[50];
	char phone[50];

	cin.getline(name, 50);
	cin.getline(phone, 50);

	cout << name << " " << phone << endl;

	return 0;
}