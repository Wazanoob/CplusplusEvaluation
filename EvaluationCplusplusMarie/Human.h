#pragma once
#include<string>
#include "GenderType.h"
#include "Car.h"

class Human
{
private:
	std::string mFirstName;
	std::string mLastName;
	std::string mMonthBirth;
	int mBirthDay;
	float mMoney;
	Gender mType;
	Car* mCar;

public:
	Human();
	Human(std::string firstName, std::string lastName, std::string monthBirth, int birthDay, Gender type, float money);
	Human(std::string firstName, std::string lastName, std::string monthBirth, int birthDay, Gender type, Car* car);
	~Human();

	std::string GetName();
	int GetMoney();
	void Introduce();
	void BuyCar(Car* car);
	Car* SellCar();
	void RollInCar(int drivedDistance);
	void PaintCar(Color color);
};

