/*
	ver 0.2
	struct Account -> class Account
	��ü ������ �迭 ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
const int name_length = 30;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllInfo(void);

enum
{
	MAKE = 1,	// enum�� ���� 0���� ����
	DEPOSIT,
	WITHDRAW,
	SHOWALL,
	EXIT
};

class Account
{
private:
	int m_ID;
	int m_balance;
	char* m_name;
public:
	Account(int id, int money, const char* name)
		:m_ID(id), m_balance(money)
	{
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
	}

	int getID() { return m_ID; }

	void Deposit(int money) { m_balance += money; }

	int WithDraw(int money)
	{
		if (m_balance < money)
			return 0;
		m_balance -= money;
		return money;
	}

	void ShowAllInfo()
	{
		cout << "����ID: " << m_ID << endl;
		cout << "�̸�: " << m_name << endl;
		cout << "�ܾ�: " << m_balance << endl;
	}

	~Account()
	{
		delete[] m_name;
	}

};

Account* accArr[100];
int accNum = 0;

int main()
{
	int input;
	while (1)
	{
		ShowMenu();
		cin >> input;
		cout << endl;

		switch (input)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case SHOWALL:
			ShowAllInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; ++i)
				delete accArr[i];
			cout << "���α׷� ����" << endl;
			return 0;
		default:
			cout << "Please try again" << endl;
		}
	}

	return 0;
}

void ShowMenu(void)
{
	cout << "-----Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}

void MakeAccount(void)
{
	int id;
	char name[name_length];
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�̸�: ";	cin >> name;
	cout << "�Աݾ�: ";	cin >> money;
	cout << endl;

	accArr[accNum] = new Account(id, money, name);
	accNum++;
}

void DepositMoney(void)
{
	int id;
	int money;
	cout << "[�Ա�]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�Աݾ�: ";	cin >> money;
	cout << endl;

	for (int i = 0; i < accNum; ++i)
	{
		if (accArr[i]->getID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void WithdrawMoney(void)
{
	int id;
	int money;
	cout << "[���]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��ݾ�: ";	cin >> money;
	cout << endl;

	for (int i = 0; i < accNum; ++i)
	{
		if (accArr[i]->getID() == id)
		{
			if (accArr[i]->WithDraw(money) == 0)
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllInfo(void)
{
	for (int i = 0; i < accNum; ++i)
	{
		accArr[i]->ShowAllInfo();
		cout << endl;
	}
}
