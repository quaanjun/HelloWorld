#pragma once

class TamGiac {
private:
    int ma, mb, mc; 

public:
    TamGiac();
    TamGiac(int a, int b, int c);
    ~TamGiac();
    void nhap();
    void xuat();
    void TinhTien(int dx, int dy);
    void xoayTamGiac(double goc);
    void phongtoTamGiac(double ty_le);
    void thunhoTamGiac(double ty_le);
    void veTamGiac();
};
