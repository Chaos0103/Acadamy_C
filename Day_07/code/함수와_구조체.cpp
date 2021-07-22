#include<iostream>
using namespace std;

struct Prop
{
	int saving;
	int loan;
};
int CalcProperty(Prop*);
int main()
{
	int hong_prop;
	Prop hong = { 10000000,4000000 };

	hong_prop = CalcProperty(&hong);

	cout << "홍길동의 재산은 적금 " << hong.saving << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원입니다." << endl;
	
	return 0;
}
int CalcProperty(Prop* money)
{
	money->saving = 100;
	return (money->saving - money->loan);
}
