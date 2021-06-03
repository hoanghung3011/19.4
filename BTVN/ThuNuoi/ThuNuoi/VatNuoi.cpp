#include "VatNuoi.h"
#include <iostream>
using namespace std;
VatNuoi::VatNuoi()
{
}
void VatNuoi::setten(char* t)
{
	ten = t;
}
char* VatNuoi::getten()
{
	return ten;
}
void VatNuoi::settuoi(int t)
{
	tuoi = t;
}
int VatNuoi::gettuoi()
{
	return tuoi;
}
void VatNuoi::setcannang(float cn)
{
	cannang = cn;
}
float VatNuoi::getcannang()
{
	return cannang;
}
void VatNuoi::nhap()
{
	cout << "\nNhap ten: ";
	cin.ignore();
	cin.getline(ten, 30);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cout << "\nNhap can nang: ";
	cin >> cannang;
}
void VatNuoi::xuat()
{
	cout << "\nTen: " << ten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nCan nang: " << cannang;
}
VatNuoi::~VatNuoi()
{
}