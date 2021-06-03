#include "Cho.h"
#include <iostream>
using namespace std;
Cho::Cho()
{
}
void Cho::nhapcho()
{
	cout << "\nNhap chieu cao va chieu dai: ";
	cin >> chieucao >> chieudai;
}
void Cho::xuatcho()
{
	cout << "\nChieu cao: " << chieucao;
	cout << "\nChieu dai: " << chieudai;
}
double Cho::tiencho()
{
	return getcannang()* 0.05;
}
Cho::~Cho()
{
}
