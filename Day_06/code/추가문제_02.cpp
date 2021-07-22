#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int i, var;
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
		if (num[i] == ',')
			break;
	}
		
	cin >> var;
	for (int j = 0; j < i; j++)
	{
		if (num[j] == var) 
		{
			cout << "true" << endl;
			return 0;
		}
	}
	cout << "false" << endl;
	return 0;
}
