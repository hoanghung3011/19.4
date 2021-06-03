#pragma once
#include "ThuVien.h"
class TapChi: public ThuVien
{
private:
	int sophathanh;
	int thang;
public:
	TapChi();
	void setsophathanh(int);
	int getsophathanh();
	void setthang(int);
	int getthang();
	void nhaptapchi();
	void xuattapchi();
	~TapChi();
};

