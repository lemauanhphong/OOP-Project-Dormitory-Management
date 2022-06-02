#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <bits/stdc++.h>
#include "human.h"
using namespace std;
/// just a normal comment

class SinhVien : public human
{
    public:
        SinhVien();
        SinhVien(string Ten ,string Id, string Sdt, string Mssv,string Truong, string Toa, string Khoa, int SoPhong);
        ~SinhVien();
        void thongTin(); /// print all information related to SinhVien
        string getToa();///getter toa
        void setToa(string a);///setter toa
        int getSoPhong();/// getter SoPhong
        void setSoPhong(int a); /// setter SoPhong
        string getMssv(); /// getter Mssv
        void setMssv(string a); ///  setter Mssv
        string getKhoa(); /// getter Khoa
        void setKhoa(string a); ///setter Khoa
        string getTruong();/// getter Truong
        void setTruong(string a); /// setter Truong
        friend bool operator ==(SinhVien a,SinhVien b);
    protected:
        string mssv;
        string truong;
        string toa; /// toa ktx sinh vien dang o
        string khoa;
        int soPhong; /// phong o bn

    private:
};

#endif // SINHVIEN_H
