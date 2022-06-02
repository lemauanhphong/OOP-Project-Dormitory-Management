#include "Phong.h"

Phong::Phong() {}

Phong::Phong(int soPhong, string toa, int sucChua)
{
    this->soPhong = soPhong;
    this->toa = toa;
    this->sucChua = sucChua;
}

Phong::~Phong()
{
    sinhVien.clear();
}

int Phong::getSoPhong()
{
    return this->soPhong;
}

void Phong::setSoPhong(int soPhong)
{
    this->soPhong = soPhong;
}

string Phong::getToa()
{
    return this->toa;
}

void Phong::setToa(string toa)
{
    this->toa = toa;
}

int Phong::getSucChua()
{
    return this->sucChua;
}

void Phong::setSucChua(int sucChua)
{
    this->sucChua = sucChua;
}

vector <SinhVien>* Phong::getSinhVien()
{
    return &(this->sinhVien);
}

int Phong::getSoLuongSinhVien()
{
    return this->sinhVien.size();
}

void Phong::del(SinhVien a)
{
    for (int i = 0; i < this->sinhVien.size(); ++i)
        if (this->sinhVien[i] == a)
            return this->sinhVien.erase(this->sinhVien.begin() + i), 1;
            
    return 0;
}

bool Phong::add(SinhVien a)
{
    if (this->getSucChua() <= this->getSoLuongSinhVien()) return 0;
    a.setSoPhong(this->soPhong);
    a.setToa(this->toa);
    this->sinhVien.push_back(a);
    return 1;
}

// void Phong::find(SinhVien a)
// {
//     for (auto x: )
// }