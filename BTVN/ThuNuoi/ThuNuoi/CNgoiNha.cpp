#include "CNgoiNha.h"
#include <iostream>
using namespace std;
int m, n, p;
CNgoiNha::CNgoiNha()
{
}
void CNgoiNha::nhap()
{
	cout << "\nNhap so luong cho: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "\nNhap con cho thu " << i + 1 << "\n";
		{
			ds[i].nhap();
			ds1[i].nhapcho();
		}
	}
	cout << "\nNhap so luong meo: ";
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cout << "\nNhap con meo thu " << j + 1 << "\n";
		{
			ds[j].nhap();
			ds2[j].nhapmeo();
		}
	}
	cout << "\nNhap so luong chuot: ";
	cin >> p;
	for (int k = 0; k < p; k++)
	{
		cout << "\nNhap con chuot thu " << k + 1 << "\n";
		{
			ds[k].nhap();
			ds3[k].nhapchuot();
		}
	}
}
void CNgoiNha::xuat()
{
	for (int i = 0; i < m; i++)
	{
		cout << "\n----------------------------------\n";
		cout << "\nCon cho thu " << i + 1 << "\n";
		{
			ds[i].xuat();
			ds1[i].xuatcho();
		}
	}
	for (int j = 0; j < n; j++)
	{
		cout << "\n----------------------------------\n";
		cout << "\nCon meo thu " << j + 1 << "\n";
		{
			ds[j].xuat();
			ds2[j].xuatmeo();
		}
	}
	for (int k = 0; k < p; k++)
	{
		cout << "\n----------------------------------\n";
		cout << "\nCon chuot thu " << k + 1 << "\n";
		{
			ds[k].xuat();
			ds3[k].xuatchuot();
		}
	}
}
double CNgoiNha::tinhtien()
{
	double a1 = 0, a2 = 0, a3 = 0;
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		a1 += ds1[i].tiencho();
	}
	for (int j = 0; j < m; j++)
	{
		a2 += ds2[j].tienmeo();
	}
	for (int k = 0; k < p; k++)
	{
		a3 += ds3[k].tienchuot();
	}
	s = a1 + a2 + a3;
	return s;
}
CNgoiNha::~CNgoiNha()
{
}
int main()
{
	CNgoiNha x;
	x.nhap();
	x.xuat();
	cout << "\nTong tien thuc an: ";
	cout << x.tinhtien();
	system("pause");
	return 0;
}