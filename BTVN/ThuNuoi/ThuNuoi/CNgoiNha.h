#pragma once
#include "Cho.h"
#include "Meo.h"
#include "Chuot.h"
#include "VatNuoi.h"
class CNgoiNha
{
private:
	VatNuoi ds[100];
	Cho ds1[100];
	Meo ds2[100];
	Chuot ds3[100];
	int n;
public:
	CNgoiNha();
	~CNgoiNha();
	void nhap();
	void xuat();
	double tinhtien();
};