#pragma once
#include "Bao.h"
#include "Sach.h"
#include "TapChi.h"
class QuanLy
{
private:
	Sach s[100];
	Bao b[100];
	TapChi tc[100];
public:
	QuanLy();
	void nhapds();
	~QuanLy();
};

