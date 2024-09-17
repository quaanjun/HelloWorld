#pragma once

class DaGiac 
{
private:
    int soDiem;
    int* hoanhDo;
    int* tungDo;

public:
    DaGiac();
    DaGiac(int n);
    ~DaGiac();

    void nhap();
    void xuat();
    void TinhTien(double dx, double dy);
    void xoayDaGiac();
    void phongtoDaGiac();
    void thunhoDaGiac();
    void veDaGiac();
};
