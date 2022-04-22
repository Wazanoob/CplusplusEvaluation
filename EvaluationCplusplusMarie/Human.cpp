#include "Human.h"
#include<iostream>

using namespace std;

Human::Human()
{
	mFirstName = "John";
	mLastName = "Doe";
	mMonthBirth = "January";
	mBirthDay = 1;
	mMoney = 15000;
	mCar = nullptr;
	mType = Gender::NonBinary;
}

Human::Human(std::string firstName, std::string lastName, std::string monthBirth, int birthDay, Gender type, float money)
{
	mFirstName = firstName;
	mLastName = lastName;
	mMonthBirth = monthBirth;
	mBirthDay = birthDay;
	mMoney = money;
	mType = type;
	mCar = nullptr;
	cout << "The person " << firstName << " " << lastName << " was created.\n";
}

Human::Human(std::string firstName, std::string lastName, std::string monthBirth, int birthDay, Gender type, Car* car)
{
	mFirstName = firstName;
	mLastName = lastName;
	mMonthBirth = monthBirth;
	mBirthDay = birthDay;
	mMoney = 15000;
	mType = type;
	mCar = car;
	cout << "The person " << firstName << " " << lastName << " was created.\n";
}

Human::~Human()
{
}

std::string Human::GetName()
{
	return mFirstName;
}

int Human::GetMoney()
{
	return mMoney;
}

void Human::Introduce()
{
	cout << mFirstName << " " << mLastName << " " << " is born the " << mMonthBirth << " " << mBirthDay << endl;

	switch (mType)
	{
	case Gender::Men:
		cout << "He is a men";
		break;
	case Gender::Women:
		cout << "She is a women";
		break;
	case Gender::NonBinary:
		cout << "It is a non-binary";
		break;
	}
	cout << " and has " << mMoney << "$ in da poket ";

	if (mCar == nullptr)
	{
		cout << "and no car.\n";
	}
	else 
	{
		cout << "and a ";
		mCar->GetCar();
	}


	cout << endl;
}

void Human::BuyCar(Car* car)
{
	mCar = car;
	mMoney -= mCar->GetValue();
}

Car* Human::SellCar()
{
	mMoney += mCar->GetValue();
	return mCar;
}

void Human::RollInCar(int drivedDistance)
{
	cout << mFirstName << " wants to drive.\n";
	cout << "The ";
	mCar->GetCar(); 
	cout << " has " << mCar->GetMileage() << " miles.\n";

	cout << mFirstName << " drived " << drivedDistance << " miles.\n";
	mCar->AddMiles(drivedDistance);
	cout << "The car has now " << mCar->GetMileage() << " miles.\n";


}

void Human::PaintCar(Color color)
{
	cout << mFirstName << " wants to change the color of his car in blue.\n";
	mCar->ChangeColor(color);
}
