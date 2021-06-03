#include "Bao.h"
#include <iostream>
using namespace std;
Bao::Bao()
{
}

void Bao::nhapbao()
{
	cout << "\nNhap ngay thang nam: \n";
	ngay.nhapntn();
}
void Bao::xuatbao()
{
	cout << "\nNgay phat hanh: ";
	ngay.xuatntn();
}

Bao::~Bao()
{
}
