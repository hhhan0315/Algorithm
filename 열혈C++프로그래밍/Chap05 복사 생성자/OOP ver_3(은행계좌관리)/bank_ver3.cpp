/*
	ver 0.3
	Account 복사 생성자 정의
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
	MAKE = 1,	// enum은 원래 0부터 저장
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

	Account(const Account& ref)
		:m_ID(ref.m_ID), m_balance(ref.m_balance)
	{
		m_name = new char[strlen(ref.m_name) + 1];
		strcpy(m_name, ref.m_name);
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
		cout << "계좌ID: " << m_ID << endl;
		cout << "이름: " << m_name << endl;
		cout << "잔액: " << m_balance << endl;
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
			cout << "프로그램 종료" << endl;
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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void MakeAccount(void)
{
	int id;
	char name[name_length];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이름: ";	cin >> name;
	cout << "입금액: ";	cin >> money;
	cout << endl;

	accArr[accNum] = new Account(id, money, name);
	accNum++;
}

void DepositMoney(void)
{
	int id;
	int money;
	cout << "[입금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "입금액: ";	cin >> money;
	cout << endl;

	for (int i = 0; i < accNum; ++i)
	{
		if (accArr[i]->getID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney(void)
{
	int id;
	int money;
	cout << "[출금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "출금액: ";	cin >> money;
	cout << endl;

	for (int i = 0; i < accNum; ++i)
	{
		if (accArr[i]->getID() == id)
		{
			if (accArr[i]->WithDraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllInfo(void)
{
	for (int i = 0; i < accNum; ++i)
	{
		accArr[i]->ShowAllInfo();
		cout << endl;
	}
}
