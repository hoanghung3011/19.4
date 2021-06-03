#pragma once
#include "VatNuoi.h"
class Cho: public VatNuoi
{
private:
	float chieucao;
	float chieudai;
public:
	Cho();
	void setchieucao(float);
	int getchieucao();
	void setchieudai(float);
	int getchieudai();
	void nhapcho();
	void xuatcho();
	double tiencho();
	~Cho();
};

