#include<iostream>
#include<cstring>
using namespace std;

class Car
{
private:
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMember(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};
void Car::InitMember(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/h" << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= FUEL_STEP;

	if (curSpeed + ACC_STEP >= MAX_SPD)
	{
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}
void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}
int main()
{
	Car run99;
	run99.InitMember("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77;
	sped77.InitMember("sped77", 100);
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
