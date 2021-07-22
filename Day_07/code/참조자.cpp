#include<iostream>
using namespace std;

int main()
{
	int num1 = 20;
	int& num2 = num1;
	int* num3 = &num1;

	cout << "num1의 주소: " << &num1 << endl;
	cout << "num2의 주소: " << &num2 << endl;
	cout << "num3의 주소: " << &num3 << endl;

	cout << "sizeof num1: " << sizeof(num1) << endl;
	cout << "sizeof num2: " << sizeof(num2) << endl;
	cout << "sizeof num3: " << sizeof(num3) << endl;

	num2 = 3047;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	return 0;
}
