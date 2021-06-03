#include "TapChi.h"
#include <iostream>
using namespace std;
TapChi::TapChi()
{
}

void TapChi::setsophathanh(int a)
{
	sophathanh = a;
}
int TapChi::getsophathanh()
{
	return sophathanh;
}
void TapChi::setthang(int b)
{
	thang = b;
}
int TapChi::getthang()
{
	return thang;
}
void TapChi::nhaptapchi()
{
	cout << "\nNhap so phat hanh: ";
	cin >> sophathanh;
	cout << "\nNhap thang phat hanh: ";
	cin >> thang;
}
void TapChi::xuattapchi()
{
	cout << "\nSo phat hanh: " << sophathanh;
	cout << "\nThang phat hanh: " << thang;
}


TapChi::~TapChi()
{
}
