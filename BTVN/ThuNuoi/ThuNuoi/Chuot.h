#pragma once
#include "VatNuoi.h"
class Chuot: public VatNuoi
{
private:
	int maulong;
public:
	Chuot();
	void setmaulong(int);
	int getmaulong();
	void nhapchuot();
	void xuatchuot();
	double tienchuot();
	~Chuot();
};