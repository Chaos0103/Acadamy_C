#include<iostream>
using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	~Book();
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main()
{
	Book web_book("HTML과 CSS", 350);
	cout << web_book.percent_ << endl;
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
Book::~Book()
{
	cout << "Book 객체의 소멸자가 호출되었습니다." << endl;
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}
