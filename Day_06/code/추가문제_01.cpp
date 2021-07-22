#include<iostream>
using namespace std;

void swap(int* ptr)
{
	int tmp;
	tmp = *ptr;
	*(ptr + 0) = *(ptr + 1);
	*(ptr + 1) = *(ptr + 2);
	*(ptr + 2) = *(ptr + 3);
	*(ptr + 3) = *(ptr + 4);
	*(ptr + 4) = tmp;
}
int main()
{
	int num[5];
	int k;

	for (int i = 0; i < 5; i++)
		cin >> num[i];
	cin >> k;
	for (int i = 0; i < k; i++)
		swap(num);
	for (int i = 0; i < 5; i++)
		cout << num[i] << ' ';

}
