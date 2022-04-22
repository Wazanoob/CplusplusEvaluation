#pragma once
#include<string>
#include "Color.h"

class Car
{
private:
	std::string mBrand;
	std::string mModel;
	std::string mLicensePlate;
	int mYear;
	int mMileage;
	int mCostValue;
	Color mColor;

public:
	Car();
	Car(std::string brand, std::string model, std::string licensePlate, int year, int mileage, int costValue, Color color);

	~Car();

	void SumUp();
	void GetCar();
	int GetValue();
	int GetMileage();
	std::string GetColor();
	void ChangeColor(Color color);
	void AddMiles(int miles);

};

