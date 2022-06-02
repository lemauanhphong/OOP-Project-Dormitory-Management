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
void SinhVien::thongTin()
{
    cout<<"HoTen : "<<ten<<"\n";
    cout<<"Mssv : "<<mssv<<"\n";
    cout<<"Sinh vien truong : "<<truong<<"\n";
    cout<<"Khoa : "<<khoa<<"\n";
    cout<<"Noi o hien tai : KTX toa"<<toa<<" , phong : "<<soPhong<<"\n";
}
