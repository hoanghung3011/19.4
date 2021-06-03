#include "Date.h"
#include <iostream>
using namespace std;
Date::Date()
{
}

void Date::setngay(int d)
{
	ngay = d;
}
int Date::getngay()
{
	return ngay;
}
void Date::setthang(int m)
{
	thang = m;
}
int Date::getthang()
{
	return thang;
}
void Date::setnam(int y)
{
	nam = y;
}
int Date::getnam()
{
	return nam;
}
void Date::nhapntn()
{
	int x;
	cout << "Nhap ngay : ";
	cin >> ngay;
	cout << "Nhap thang : ";
	cin >> thang;
	cout << "Nhap nam : ";
	cin >> nam;
	if (nam < 0 || thang < 0 || thang> 12 || ngay < 0 || ngay> 31)
	{
		cout << "Ngay khong hop le";
	}
	else
	{
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			x = 31;
			break;
		case 2:
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				x = 29;
			else
				x = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			x = 30;
			break;
		}
		if (ngay <= x)
		{
			cout << "Ngay hop le !" << "\n";
		}
		else
		{
			cout << "Ngay khong hop le !" << "\n";
		}
	}
}
void Date::xuatntn()
{
	cout << ngay << "/" << thang << "/" << nam;
}

Date::~Date()
{
}
