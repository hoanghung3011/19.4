#include "QuanLy.h"
#include <iostream>
using namespace std;
QuanLy::QuanLy()
{
}

void QuanLy::nhapds()
{
	int chon;
	int n;
	do
	{
		cout << "\n---------Menu------------";
		cout << "\n1.Sach";
		cout << "\n2.Bao";
		cout << "\n3.Tap Chi";
		cout << "\n4.Thoat";
		cout << "\n-------------------------";
		do 
		{
			cout << "\nNhap vao lua chon cua ban: ";
			cin >> chon;
			if (chon < 1 || chon >4)
			{
				cout << "Loi! Nhap lai";
			}
		} while (chon < 1 || chon >4);

		if (chon == 1) 
		{
			cout << "\nNhap so luong sach: ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				cout << "\nNhap sach thu " << i + 1;
				s[i].nhap();
				s[i].nhapsach();
			}
			for (int i = 0; i < n; i++)
			{
				cout << "\n-----------------------------------------------\n";
				cout << "\nSach thu " << i + 1;
				s[i].xuat();
				s[i].xuatsach();
			}
		}
		if (chon == 2) 
		{
			cout << "\nNhap so luong bao: ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				cout << "\nNhap bao thu " << i + 1;
				b[i].nhap();
				b[i].nhapbao();
			}
			for (int i = 0; i < n; i++)
			{
				cout << "\n-----------------------------------------------\n";
				cout << "\nBao thu " << i + 1;
				b[i].xuat();
				b[i].xuatbao();
			}
		}
		if (chon == 3) 
		{
			cout << "\nNhap so luong tap chi: ";
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				cout << "\nNhap tap chi thu " << i + 1;
				tc[i].nhap();
				tc[i].nhaptapchi();
			}
			for (int i = 0; i < n; i++)
			{
				cout << "\n-----------------------------------------------\n";
				cout << "\nTap chi thu " << i + 1;
				tc[i].xuat();
				tc[i].xuattapchi();
			}
		}

	} while (chon != 4);
}

QuanLy::~QuanLy()
{
}
int main()
{
	QuanLy x;
	x.nhapds();
	system("pause");
	return 0;
}