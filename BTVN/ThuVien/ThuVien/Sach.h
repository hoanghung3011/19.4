#pragma once
#include "ThuVien.h"
class Sach: public ThuVien
{
private: 
	int sotrang;
	char* tentg = new char[50];
public:
	Sach();
	void setsotrang(int);
	int getsotrang();
	void settentg(char*);
	char* gettentg();
	void nhapsach();
	void xuatsach();
	~Sach();
};

