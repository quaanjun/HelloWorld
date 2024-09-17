#include "TamGiac.h"
#include <iostream>
#include <cmath>

using namespace std;
int pi = 3.14;
TamGiac::TamGiac() : ma(0), mb(0), mc(0) {}

TamGiac::TamGiac(int a, int b, int c) : ma(a), mb(b), mc(c) {}

TamGiac::~TamGiac() {}

void TamGiac::nhap() 
{
    cout << "Nhap do dai cac canh cua tam giac:\n";
    cout << "Canh a: "; cin >> ma;
    cout << "Canh b: "; cin >> mb;
    cout << "Canh c: "; cin >> mc;
}

void TamGiac::xuat() 
{
    cout << "Tam giac co cac canh: a = " << ma << ", b = " << mb << ", c = " << mc << endl;
}

void TamGiac::TinhTien(int dx, int dy) 
{
    ma += dx; mb += dx; mc += dx;
}

void TamGiac::xoayTamGiac(double goc) 
{
    double radian = goc * pi / 180.0;
    int x_mid = (ma + mb + mc) / 3;
    ma -= x_mid; mb -= x_mid; mc -= x_mid;
    int new_ma = round(ma * cos(radian) - mb * sin(radian));
    int new_mb = round(ma * sin(radian) + mb * cos(radian));
    int new_mc = round(mc * cos(radian) - mb * sin(radian));
    ma = new_ma + x_mid; mb = new_mb + x_mid; mc = new_mc + x_mid;
}

void TamGiac::phongtoTamGiac(double ty_le) {
    ma *= ty_le; mb *= ty_le; mc *= ty_le;
}

void TamGiac::thunhoTamGiac(double ty_le) {
    ma /= ty_le; mb /= ty_le; mc /= ty_le;
}


