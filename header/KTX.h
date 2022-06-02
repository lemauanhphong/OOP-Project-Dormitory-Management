#ifndef KTX_H_INCLUDED
#define KTX_H_INCLUDED

#include <bits/stdc++.h>
#include "Toa.h"
using namespace std;

class KTX {
    string ten;
    string diaChi;
    string SDT;
    string email;
    vector <Toa> toa;
public:
    KTX(string ten = "", string diaChi = "", string SDT = "", string email = "", vector <Toa> toa = vector <Toa> ());
    ~KTX();

    string getTen();
    string getDiaChi();
    string getSDT();
    string getEmail();
    int getSoLuongToa();

    void setTen(string ten);
    void setDiaChi(string diaChi);
    void setSDT(string SDT);
    void setEmail(string email);

    void inThongTinKTX();
    void suaThongTinKTX();
    void inThongTinToa();
    void dangKySinhVien();
    void huyDangKySinhVien();
};

#endif // KTX_H_INCLUDED
