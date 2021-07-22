#include<iostream>
using namespace std;

void Shift(int, int);
void Shift(int, int, int);
void Shift(int, int, int, int);

int main()
{
	Shift(1, 2);
	Shift(1, 2, 3);
	Shift(1, 2, 3, 4);
	return 0;
}
void Shift(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

	cout << a << ", " << b << endl;
}
void Shift(int a, int b, int c)
{
	int tmp;
	tmp = a;
	a = b;
	b = c;
	c = tmp;
	cout << a << ", " << b << ", " << c << endl;
}
void Shift(int a, int b, int c, int d)
{
	int tmp;
	tmp = a;
	a = b;
	b = c;
	c = d;
	d = tmp;
	cout << a << ", " << b << ", " << c << ", " << d << endl;
}
