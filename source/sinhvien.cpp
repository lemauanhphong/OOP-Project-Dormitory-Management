#include "SinhVien.h"

SinhVien::SinhVien()
{
    //ctor
}

SinhVien::~SinhVien()
{
    //dtor
}
SinhVien::SinhVien(string Ten ,string Id, string Sdt, string Mssv,string Truong, string Toa, string Khoa, int SoPhong) : human(Ten, Id, Sdt)
{
    mssv = Mssv;
    toa = Toa;
    khoa = Khoa;
    soPhong = SoPhong;

}
void SinhVien::thongTin()
{
    cout<<"HoTen : "<<ten<<"\n";
    cout<<"Mssv : "<<mssv<<"\n";
    cout<<"Sinh vien truong : "<<truong<<"\n";
    cout<<"Khoa : "<<khoa<<"\n";
    cout<<"Noi o hien tai : KTX toa"<<toa<<" , phong : "<<soPhong<<"\n";
}
string SinhVien::getToa()
{
    return toa;
}
string SinhVien::getMssv()
{
    return mssv;
}
string SinhVien::getKhoa()
{
    return khoa;
}
string SinhVien::getTruong()
{
    return truong;
}
int SinhVien::getSoPhong()
{
    return soPhong;
}
void SinhVien::setToa(string a)
{
    toa = a;
}
void SinhVien::setMssv(string a)
{
    mssv = a;
}
void SinhVien::setKhoa(string a)
{
    khoa = a;
}
void SinhVien::setTruong(string a)
{
    truong = a;
}
void SinhVien::setSoPhong(int a)
{
    soPhong = a;
}
