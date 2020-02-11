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

typedef struct
{
	int ID;
	char NAME[name_length];
	int haveMoney;
}Account;

Account accArr[100];
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

	accArr[accNum].ID = id;
	strcpy(accArr[accNum].NAME, name);
	accArr[accNum].haveMoney = money;
	accNum += 1;
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
		if (accArr[i].ID == id)
		{
			accArr[i].haveMoney += money;
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
		if (accArr[i].ID == id)
		{
			if (accArr[i].haveMoney < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			accArr[i].haveMoney -= money;
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
		cout << "계좌ID: " << accArr[i].ID << endl;
		cout << "이름: " << accArr[i].NAME << endl;
		cout << "잔액: " << accArr[i].haveMoney << endl << endl;
	}
}
