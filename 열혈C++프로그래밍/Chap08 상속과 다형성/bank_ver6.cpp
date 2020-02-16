/*
	ver 0.
	NormalAccount, HighCreditAccount 추가

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
const int name_length = 30;

enum { MAKE = 1, DEPOSIT, WITHDRAW, SHOWALL, EXIT };
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };
enum { NORMAL = 1, HIGH = 2 };

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
	virtual void Deposit(int money);
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

class NormalAccount : public Account
{
private:
	int m_rate;
public:
	NormalAccount(int id, int money, const char* name, int rate)
		:Account(id, money, name), m_rate(rate)
	{}

	virtual void Deposit(int money)
	{
		Account::Deposit(money);
		Account::Deposit(money * (m_rate / 100.0));
	}
};

class HighCreditAccount : public NormalAccount
{
private:
	int m_specialRate;
public:
	HighCreditAccount(int id, int money, const char* name, int rate, int specialRate)
		:NormalAccount(id,money,name,rate), m_specialRate(specialRate)
	{}

	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);
		Account::Deposit(money * (m_specialRate / 100.0));
	}
};

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
protected:
	void MakeNormalAccount(void);
	void MakeHighAccount(void);
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
	int choice;
	cout << "[계좌종류선택]" << endl;
	cout << "1.보통예금계좌 2.신용신뢰계좌" << endl;
	cout << "선택: "; cin >> choice;

	if (choice == NORMAL)
		MakeNormalAccount();
	else
		MakeHighAccount();
} 

void AccountHandler::MakeNormalAccount(void)
{
	int id;
	char name[name_length];
	int money;
	int rate;

	cout << "[보통예금계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이름: ";	cin >> name;
	cout << "입금액: ";	cin >> money;
	cout << "이자율 "; cin >> rate;
	cout << endl;

	accArr[accNum] = new NormalAccount(id, money, name, rate);
	accNum++;
}

void AccountHandler::MakeHighAccount(void)
{
	int id;
	char name[name_length];
	int money;
	int rate;
	int specialRate;

	cout << "[신용신뢰계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이름: ";	cin >> name;
	cout << "입금액: ";	cin >> money;
	cout << "이자율: "; cin >> rate;
	cout << "신용등급(1toA, 2toB, 3toC): "; cin >> specialRate;
	cout << endl;

	switch (specialRate)
	{
	case 1:
		accArr[accNum] = new HighCreditAccount(id, money, name, rate, LEVEL_A);
		accNum++;
		break;
	case 2:
		accArr[accNum] = new HighCreditAccount(id, money, name, rate, LEVEL_B);
		accNum++;
		break;
	case 3:
		accArr[accNum] = new HighCreditAccount(id, money, name, rate, LEVEL_C);
		accNum++;
		break;
	}

	
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
	for (int i = 0; i < accNum; i++)
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