#include "DaGiac.h"
#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Nhap so diem cua da giac: ";
    cin >> n;

    DaGiac dg(n);

    dg.nhap();

    cout << "Da giac sau khi nhap:" << endl;
    dg.xuat();

    double dx, dy;
    cout << "Nhap khoang tinh tien theo truc x va y: ";
    cin >> dx >> dy;
    dg.TinhTien(dx, dy);

    cout << "Da giac sau khi tinh tien:" << endl;
    dg.xuat();
    dg.xoayDaGiac();

    cout << "Da giac sau khi xoay:" << endl;
    dg.xuat();
    dg.phongtoDaGiac();

    cout << "Da giac sau khi phong to:" << endl;
    dg.xuat();
    dg.thunhoDaGiac();

    cout << "Da giac sau khi thu nho:" << endl;
    dg.xuat();

    return 0;
}
