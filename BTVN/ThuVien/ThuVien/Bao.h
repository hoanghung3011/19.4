#pragma once
#include "ThuVien.h"
#include "Date.h"
class Bao: public ThuVien
{
private:
	Date ngay;
public:
	Bao();
	void nhapbao();
	void xuatbao();	
	~Bao();
};

