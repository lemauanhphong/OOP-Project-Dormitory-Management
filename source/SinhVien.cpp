#include "SinhVien.h"

SinhVien::SinhVien()
{
    //ctor
}

SinhVien::~SinhVien()
{
    //dtor
}
SinhVien::SinhVien(string Ten ,string Id, string Sdt, string Mssv,string Truong, string Toa, string Khoa, int SoPhong) : Human(Ten, Id, Sdt)
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
/// just a normal comment
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
void SinhVien::nhapThongTin()
{
    cout<<"Ho ten sinh vien:\n";
    cin>>ten;
    cout<<"So cccd/cmnd:\n";
    cin>>id;
    cout<<"So dien thoai:\n";
    cin>>sdt;
    cout<<"Ma so sinh vien:\n";
    cin>>mssv;
    cout<<"Truong sinh vien dang theo hoc:\n";
    cin>>truong;
    cout<<"Khoa sinh vien dang theo hoc:\n";
    cin>>khoa;
}
bool operator == (SinhVien a,SinhVien b)
{
    return (a.ten == b.ten) && (a.id == b.id) && (a.mssv == b.mssv) && (a.khoa == b.khoa) && (a.toa == b.toa) && (a.sdt == b.sdt) && (a.truong == b.truong) && (a.soPhong == b.soPhong);
}
