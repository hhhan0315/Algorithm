#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	void showPosition(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* m_name;
	char* m_company;
	char* m_phone;
	int m_position;
public:
	NameCard(const char* name, const char* company, const char* phone, int position)
		:m_position(position)
	{
		m_name = new char[strlen(name) + 1];
		m_company = new char[strlen(company) + 1];
		m_phone = new char[strlen(phone) + 1];
		strcpy(m_name, name);
		strcpy(m_company, company);
		strcpy(m_phone, phone);
	}
	void ShowNameCardInfo()
	{
		cout << "이름: " << m_name << endl;
		cout << "회사: " << m_company << endl;
		cout << "전화번호: " << m_phone << endl;
		cout << "직급: "; COMP_POS::showPosition(m_position);
		cout << endl;
	}
	~NameCard()
	{
		delete[] m_name;
		delete[] m_company;
		delete[] m_phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodEng", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
