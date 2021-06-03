#pragma once
class Date
{
private:
	int ngay, thang, nam;
public:
	Date();
	void setngay(int);
	int getngay();
	void setthang(int);
	int getthang();
	void setnam(int);
	int getnam();
	void nhapntn();
	void xuatntn();
	~Date();
};

