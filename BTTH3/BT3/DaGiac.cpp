#include "DaGiac.h"
#include <iostream>

using namespace std;
int pi = 3.14;
DaGiac::DaGiac() 
{
    soDiem = 0;
    hoanhDo = nullptr;
    tungDo = nullptr;
}

DaGiac::DaGiac(int n) 
{
    soDiem = n;
    hoanhDo = new int[n];
    tungDo = new int[n];
}

DaGiac::~DaGiac() 
{
    delete[] hoanhDo;
    delete[] tungDo;
}

void DaGiac::nhap() 
{
    for (int i = 0; i < soDiem; i++) 
    {
        cout << "Nhap toa do diem " << i + 1 << " (hoanh, tung): ";
        cin >> hoanhDo[i] >> tungDo[i];
    }
}

void DaGiac::xuat() 
{
    for (int i = 0; i < soDiem; i++) 
    {
        cout << "Diem " << i + 1 << ": (" << hoanhDo[i] << ", " << tungDo[i] << ")" << endl;
    }
}

void DaGiac::TinhTien(double dx, double dy) 
{
    for (int i = 0; i < soDiem; i++) 
    {
        hoanhDo[i] += dx;
        tungDo[i] += dy;
    }
}

void DaGiac::xoayDaGiac() {
    double goc;
    cout << "Nhap goc xoay (degrees): ";
    cin >> goc;
    double radian = goc * pi / 180; 

    double tamHoanh = 0;
    double tamTung = 0;
    for (int i = 0; i < soDiem; i++) {
        tamHoanh += hoanhDo[i];
        tamTung += tungDo[i];
    }
    tamHoanh /= soDiem;
    tamTung /= soDiem;

    for (int i = 0; i < soDiem; i++) 
    {
        double hoanhMoi = tamHoanh + (hoanhDo[i] - tamHoanh) * cos(radian) - (tungDo[i] - tamTung) * sin(radian);
        double tungMoi = tamTung + (hoanhDo[i] - tamHoanh) * sin(radian) + (tungDo[i] - tamTung) * cos(radian);
        hoanhDo[i] = hoanhMoi;
        tungDo[i] = tungMoi;
    }
}


void DaGiac::phongtoDaGiac() 
{
    double heSoPhongTo;
    cout << "Nhap he so phong to: ";
    cin >> heSoPhongTo;

    for (int i = 0; i < soDiem; i++) 
    {
        hoanhDo[i] *= heSoPhongTo;
        tungDo[i] *= heSoPhongTo;
    }
}


void DaGiac::thunhoDaGiac() 
{
    double heSoThuNho;
    cout << "Nhap he so thu nho: ";
    cin >> heSoThuNho;

    for (int i = 0; i < soDiem; i++) 
    {
        hoanhDo[i] /= heSoThuNho;
        tungDo[i] /= heSoThuNho;
    }
}

