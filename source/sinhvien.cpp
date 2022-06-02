#include "SinhVien.h"

SinhVien::SinhVien()
{
    //ctor
}

SinhVien::~SinhVien()
{
    //dtor
}
SinhVien::SinhVien(string Ten ,string Id,int Tuoi, string Sdt, string Mssv,string Truong, string Toa, string Khoa, int SoPhong) : human(Ten, Id, Tuoi, Sdt)
{
    mssv = Mssv;
    toa = Toa;
    khoa = Khoa;
    soPhong = SoPhong;

}
