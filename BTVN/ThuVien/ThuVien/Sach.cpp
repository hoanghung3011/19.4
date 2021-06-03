#include "Sach.h"
#include <iostream>
using namespace std;
Sach::Sach()
{
}

void Sach::setsotrang(int st)
{
	sotrang = st;
}
int Sach::getsotrang()
{
	return sotrang;
}
void Sach::settentg(char* ttg)
{
	tentg = ttg;
}
char* Sach::gettentg()
{
	return tentg;
}
void Sach::nhapsach()
{
	cout << "\nNhap so trang: ";
	cin >> sotrang;
	cout << "\nNhap ten tac gia: ";
	cin.ignore();
	cin.getline(tentg, 50);
}
void Sach::xuatsach()
{
	cout << "\nSo trang: " << sotrang;
	cout << "\nTen tac gia: " << tentg;
}

Sach::~Sach()
{
}
