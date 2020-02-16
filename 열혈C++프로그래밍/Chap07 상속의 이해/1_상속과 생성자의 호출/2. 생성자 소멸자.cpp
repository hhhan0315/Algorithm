#include <iostream>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* name_in, int age_in)
		:age(age_in)
	{
		name = new char[strlen(name_in) + 1];
		strcpy(name, name_in);
	}
	~MyFriendInfo()
	{
		delete[] name;
	}

	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name_in, int age_in, const char* addr_in, const char* phone_in)
		:MyFriendInfo(name_in, age_in)
	{
		addr = new char[strlen(addr_in) + 1];
		phone = new char[strlen(phone_in) + 1];
		strcpy(addr, addr_in);
		strcpy(phone, phone_in);
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
	void ShowFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl;
	}
};
int main()
{
	MyFriendDetailInfo friend1("han", 20, "gimpo", "1234-5678");
	friend1.ShowFriendDetailInfo();

	return 0;
}