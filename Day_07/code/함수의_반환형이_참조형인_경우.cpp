#include<iostream>
using namespace std;

int& RefRetFunc1(int& ref)
{
	ref++;
	return ref;
}
int main()
{
	int num1 = 1;
	int& num2 = RefRetFunc1(num1);

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	num1++;
	num2++;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}
