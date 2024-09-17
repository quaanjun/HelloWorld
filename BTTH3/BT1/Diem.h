#pragma once
class Diem
{
private:
	double hoanhdo, tungdo;

public:
	Diem(double hoanh = 0.0, double tung = 0.0);
	Diem(Diem& d);

	void setHoanhDo(double hoanh);
	void setTungDo(double tung);
	int getHoanh() const;
	int getTung() const;

	void TinhTien(double dx, double dy);
	void nhap();
	void xuat() const;
	void veDiem(const Diem& d);
	Diem& operator=(const Diem& d);
};

