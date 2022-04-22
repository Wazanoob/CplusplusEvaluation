#include "Car.h"
#include<iostream>

using namespace std;
Car::Car()
{
	mBrand = "Tuture";
	mModel = " Super";
	mLicensePlate = "(TRD - 666)";
	mYear = 2042;
	mMileage = 0;
	mCostValue = 100;
	mColor = Color::Cyan;
}

Car::Car(std::string brand, std::string model, std::string licensePlate, int year, int mileage, int costValue, Color Color)
{
	mBrand = brand;
	mModel = model;
	mLicensePlate = licensePlate;
	mYear = year;
	mMileage = mileage;
	mCostValue = costValue;
	mColor = Color;

	SumUp();
}

Car::~Car()
{
}

void Car::SumUp()
{
	cout << "The car " << mBrand << mModel << " was created.\n";
	cout << "It's a " << GetColor() << " car with license plate " << mLicensePlate << endl;
	cout << "With a mileage of " << mMileage << " km, it has a value of " << mCostValue << "$\n";
}

void Car::GetCar()
{
	cout << mBrand << "" << mModel << " " << mLicensePlate << " ";
}

int Car::GetValue()
{
	return mCostValue;
}

std::string Car::GetColor()
{
	switch (mColor)
	{
	case Color::Blue:
		return " blue";
	case Color::Cyan:
		return " cyan";
	case Color::Green:
		return " green";
	case Color::Red:
		return " red";
	case Color::Magenta:
		return " magenta";
	case Color::Yellow:
		return " yellow";
	}
}

int Car::GetMileage()
{
	return mMileage;
}

void Car::AddMiles(int miles)
{
	mMileage += miles;
}

void Car::ChangeColor(Color color)
{
	cout << "The color of the "<< mBrand << mLicensePlate << " was " << GetColor();

	mColor = color;

	cout << " and is now " << GetColor() << endl;
}


