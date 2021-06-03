#pragma once
#include "VatNuoi.h"
class Meo: public VatNuoi
{
private:
	char* loaimeo = new char[30];
public:
	Meo();
	void setloaimeo(char*);
	char* getloaimeo();
	void nhapmeo();
	void xuatmeo();
	double tienmeo();
	~Meo();
};