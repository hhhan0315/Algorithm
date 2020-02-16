#include <iostream>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title_in, const char* isbn_in, int price_in)
		:price(price_in)
	{
		title = new char[strlen(title_in) + 1];
		isbn = new char[strlen(isbn_in) + 1];
		strcpy(title, title_in);
		strcpy(isbn, isbn_in);
	}

	void ShowBookInfo()
	{
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}

	~Book()
	{
		delete[] title;
		delete[] isbn;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;
public:
	EBook(const char* title_in, const char* isbn_in, int price_in, const char* DRM_in)
		:Book(title_in, isbn_in, price_in)
	{
		DRMKey = new char[strlen(DRM_in) + 1];
		strcpy(DRMKey, DRM_in);
	}

	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}

	~EBook()
	{
		delete[] DRMKey;
	}
};

int main()
{
	Book book("좋은 C++", "555-12345-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-1", 10000, "fdx9wi");
	ebook.ShowEBookInfo();
	
	return 0;
}