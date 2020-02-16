/*
	ver 0.5
	AccountHandler 추가

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
const int name_length = 30;

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
	Account(int id, int money, const char* name);
	Account(const Account& ref);

	int getID() const;
	void Deposit(int money);
	int WithDraw(int money);
	void ShowAllInfo() const;
	~Account();

};

Account::Account(int id, int money, const char* name)
	:m_ID(id), m_balance(money)
{
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}

Account::Account(const Account& ref)
	:m_ID(ref.m_ID), m_balance(ref.m_balance)
{
	m_name = new char[strlen(ref.m_name) + 1];
	strcpy(m_name, ref.m_name);
}

int Account::getID() const { return m_ID; }
void Account::Deposit(int money) { m_balance += money; }
int Account::WithDraw(int money)
{
	if (m_balance < money)
		return 0;
	m_balance -= money;
	return money;
}

void Account::ShowAllInfo() const
{
	cout << "계좌ID: " << m_ID << endl;
	cout << "이름: " << m_name << endl;
	cout << "잔액: " << m_balance << endl;
}

Account::~Account()
{
	delete[] m_name;
}

class AccountHandler
{
private:
	Account* accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllInfo(void) const;
	~AccountHandler();
};

void AccountHandler::ShowMenu(void) const
{
	cout << "-----Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void AccountHandler::MakeAccount(void)
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

void AccountHandler::DepositMoney(void)
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

void AccountHandler::WithdrawMoney(void)
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

AccountHandler::AccountHandler() : accNum(0)
{}

void AccountHandler::ShowAllInfo(void) const
{
	for (int i = 0; i < accNum; ++i)
	{
		accArr[i]->ShowAllInfo();
		cout << endl;
	}
}

AccountHandler::~AccountHandler()
{
	for(int i=0; i<accNum; i++)
		delete accArr[i];
}

int main()
{
	AccountHandler manager;
	int input;
	while (1)
	{
		manager.ShowMenu();
		cin >> input;
		cout << endl;

		switch (input)
		{
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithdrawMoney();
			break;
		case SHOWALL:
			manager.ShowAllInfo();
			break;
		case EXIT:
			cout << "프로그램 종료" << endl;
			return 0;
		default:
			cout << "Please try again" << endl;
		}
	}

	return 0;
}