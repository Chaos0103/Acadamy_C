#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char name[20];
	int age;

public:
	Person(const char myname[], int myage) :age(myage)
	{
		strcpy_s(name, 20, myname);
	}
	void WhatIsYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old." << endl;
	}
};
class UnivStudent :public Person
{
private:
	char major[20];
public:
	UnivStudent(const char myname[], int myage, const char mymajor[]) :Person(myname, myage)
	{
		strcpy_s(major, 50, mymajor);
	}
	void WhoAreYou()const
	{
		WhatIsYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};
int main()
{
	UnivStudent ustd1("Park Hyo Won", 14, "Computer Science");
	ustd1.WhoAreYou();

	UnivStudent ustd2("La Tae In", 14, "Medical Science");
	ustd2.WhoAreYou();

	return 0;
}
