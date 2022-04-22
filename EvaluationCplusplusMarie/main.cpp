#include <iostream>
#include "Human.h"
#include "Car.h"
#include "GenderType.h"

using namespace std;

int main()
{
	Car superTuture = Car("Peugeot", " 205", "(PTDR-1234)", 2022, 20457, 50000, Color::Magenta);
	cout << endl;

	Human patricia = Human("Patricia", "Barro", "Decembre", 12, Gender::NonBinary, &superTuture);
	patricia.Introduce();
	cout << endl;

	Human patrick = Human("Patrick", " Dwu", "February", 01, Gender::Men, 50001);
	patrick.Introduce();

	patricia.PaintCar(Color::Blue);

	patrick.BuyCar(patricia.SellCar());
	cout << endl;
	patrick.Introduce();
	cout << endl;
	cout << patricia.GetName() << " has " << patricia.GetMoney() << " in da poket. \n";

	cout << endl;

	patrick.RollInCar(10000);
}
