#pragma once
class ThuVien
{
private:
	char* ma = new char[50];
	char* ten = new char[50];
	char* tennhaxb = new char[50];
	int sobanphathanh;
public:
	ThuVien();
	void setma(char*);
	char* getma();
	void setten(char*);
	char* getten();
	void settennhaxb(char*);
	char* gettennhaxb();
	void setsobanphathanh(int);
	int getsobanphathanh();
	void nhap();
	void xuat();
	~ThuVien();
};

