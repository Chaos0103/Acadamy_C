#include<iostream>
using namespace std;

int main()
{
	int money;
	int coin[4] = { 500,100,50,10 };

	cout << "금액을 입력하세요: ";
	cin >> money;

	for (int i = 0; i < 4; i++)
	{
		cout << coin[i] << "원 : " << money / coin[i] << endl;
		money %= coin[i];
	}
}
