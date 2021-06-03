#include "Meo.h"
#include <iostream>
#include <string>
using namespace std;
Meo::Meo()
{
}
void Meo::setloaimeo(char* lm)
{
	loaimeo = lm;
}
char* Meo::getloaimeo()
{
	return loaimeo;
}
void Meo::nhapmeo()
{
	cout << "\nNhap loai meo: ";
	cin.ignore();
	cin.getline(loaimeo, 30);
}
void Meo::xuatmeo()
{
	cout << "\nLoai meo: " << loaimeo;
}
double Meo::tienmeo()
{
	return (getcannang() - 1) * 0.04;
}
Meo::~Meo()
{
}
