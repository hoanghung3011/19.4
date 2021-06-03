#pragma once
class VatNuoi
{
private:
	char *ten = new char[30];
	int tuoi;
	float cannang;
public:
	VatNuoi();
	void setten(char*);
	char* getten();
	void settuoi(int);
	int gettuoi();
	void setcannang(float);
	float getcannang();
	void nhap();
	void xuat();
	~VatNuoi();
};