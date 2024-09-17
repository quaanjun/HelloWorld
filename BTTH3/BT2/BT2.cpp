#include "TamGiac.h"
#include <iostream>

using namespace std;

int main() {
    TamGiac tg;
    tg.nhap();
    tg.xuat();
    int dx, dy;
    cout << "Nhap vecto tinh tien (dx, dy): ";
    cin >> dx >> dy;
    tg.TinhTien(dx, dy);

    double goc;
    cout << "Nhap goc xoay (theo do): ";
    cin >> goc;
    tg.xoayTamGiac(goc);

    double ty_le;
    cout << "Nhap ti le phong to: ";
    cin >> ty_le;
    tg.phongtoTamGiac(ty_le);

    cout << "Nhap ti le thu nho: ";
    cin >> ty_le;
    tg.thunhoTamGiac(ty_le);


    return 0;
}
