#include "Chuot.h"
#include <iostream>
using namespace std;
Chuot::Chuot()
{
}
void Chuot::setmaulong(int ml)
{
	maulong = ml;
}
int Chuot::getmaulong()
{
	return maulong;
}
void Chuot::nhapchuot()
{
	cout << "\nNhap mau long (0-xam tro; 1-trang soc den; 2-tra sua; 3-khac): ";
	cin >> maulong;
}
void Chuot::xuatchuot()
{
	cout << "\nMau long: ";
	if (maulong == 0) cout << "Xam tro";
	if (maulong == 1) cout << "Trang soc den";
	if (maulong == 2) cout << "Tra sua";
	if (maulong == 3) cout << "Khac";
}
double Chuot::tienchuot()
{
	double s1 = 0;
	if (getmaulong() == 0 || getmaulong() == 2)
	{
		s1 += (getcannang() + gettuoi()) * 0.02;
	}
	else s1 += getcannang() * 0.025;
	return s1;
}
Chuot::~Chuot()
{
}
