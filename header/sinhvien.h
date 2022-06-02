#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <bits/stdc++.h>
#include "human.h"
using namespace std;


class sinhvien : public human
{
    public:
        sinhvien();
        ~sinhvien();
        void thong_tin();
        string getToa();///getter toa
        void setToa(string a);///setter toa
        int getPhong();/// getter SoPhong
        void setPhong(int a); /// setter SoPhong
        string getMssv(); /// getter Mssv
        void setMssv(string a); ///  setter Mssv
        string getKhoa(); /// getter Khoa
        void setKhoa(string a); ///setter Khoa
        string getTruong();/// getter Truong
        void setTruong(string a); /// setter Truong

    protected:
        string Mssv;
        string Truong;
        string toa; /// toa ktx sinh vien dang o
        string Khoa;
        int SoPhong; /// phong o bn

    private:
};

#endif // SINHVIEN_H
