

#include <iostream>
#include "Diem.h"

using namespace std;
int main()
{
    Diem p(3, 2);

    cout << "Thong tin cua diem: " << endl;
    p.xuat();

    cout << "Thay doi thong tin diem: " << endl;
    p.nhap();

    cout << "Thong tin cua diem sau khi duoc thay doi: " << endl;
    p.xuat();

    cout << "Tinh tien diem: " << endl;
    p.TinhTien(2, 3);

    cout << "Thong tin cua diem sau khi duoc tinh tien: " << endl;
    p.xuat();

    cout << "Ve diem: " << endl;
    p.veDiem(p);
}

