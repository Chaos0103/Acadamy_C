#include<iostream>
using namespace std;

class Animal
{
public:
	virtual ~Animal() {}
	virtual void Cry() = 0;
};
class Dog :public Animal
{
public:
	virtual void Cry() { cout << "멍멍!!" << endl; }
};
class Cat :public Animal
{
public:
	virtual void Cry() { cout << "야옹야옹!!" << endl; }
};
int main()
{
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	return 0;
}
