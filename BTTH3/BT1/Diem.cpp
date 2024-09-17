#include <iostream>
#include "Diem.h"

using namespace std;

Diem::Diem(double hoanh, double tung): hoanhdo(hoanh), tungdo(tung){}

Diem::Diem(Diem& d)
{
	hoanhdo = d.hoanhdo;
	tungdo = d.tungdo;
}

void Diem::setHoanhDo(double hoanh)
{
	hoanhdo = hoanh;
}

void Diem::setTungDo(double tung)
{
	tungdo = tung;
}

int Diem::getHoanh() const
{
	return hoanhdo;
}

int Diem::getTung() const
{
	return tungdo;
}

void Diem::TinhTien(double dx, double dy)
{
	hoanhdo += dx;
	tungdo += dy;
}

void Diem::nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> hoanhdo;
	cout << "Nhap tung do: ";
	cin >> tungdo;
}

void Diem::xuat() const
{
	cout << "Diem co hoanh do: " << hoanhdo << " co tung do: " << tungdo << endl;
}

Diem& Diem::operator=(const Diem& d) {
	hoanhdo = d.hoanhdo;
	tungdo = d.tungdo;
	return *this;
}

void Diem::veDiem(const Diem& d) {
	for (int i = 0; i < d.getTung(); i++)
	{
		cout << endl;
	}
	for (int i = 0; i < d.getHoanh(); i++)
	{
		cout << " ";
	}
	cout << "X" << endl;
}