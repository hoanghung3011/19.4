#include "ThuVien.h"
#include <iostream>
using namespace std;
ThuVien::ThuVien()
{
}

void ThuVien::setma(char* m)
{
	ma = m;
}
char* ThuVien::getma()
{
	return ma;
}
void ThuVien::setten(char* t)
{
	ten = t;
}
char* ThuVien::getten()
{
	return ten;
}
void ThuVien::settennhaxb(char* txb)
{
	tennhaxb = txb;
}
char* ThuVien::gettennhaxb()
{
	return tennhaxb;
}
void ThuVien::setsobanphathanh(int a)
{
	sobanphathanh = a;
}
int ThuVien::getsobanphathanh()
{
	return sobanphathanh;
}
void ThuVien::nhap()
{
	cout << "\nNhap ma (sach/bao/tap chi): ";
	cin.ignore();
	cin.getline(ma, 50);
	cout << "\nNhap ten (sach/bao/tap chi): ";
	fflush(stdin);
	cin.getline(ten, 50);
	cout << "\nNhap ten nha xuat ban: ";
	fflush(stdin);
	cin.getline(tennhaxb, 50);
	cout << "\nNhap so ban phat hanh: ";
	cin >> sobanphathanh;
}
void ThuVien::xuat()
{
	cout << "\nMa: " << ma;
	cout << "\nTen: " << ten;
	cout << "\nTen nha xuat ban: " << tennhaxb;
	cout << "\nSo ban phat hanh: " << sobanphathanh;
}

ThuVien::~ThuVien()
{
}
