#include "Toa.h"

Toa::Toa() {}

Toa::Toa(string toa, int sucChua)
{
    this->toa = toa;
    this->sucChua = sucChua;
}

Toa::~Toa()
{
    phong.clear();
}

int Toa::getSucChua()
{
    return this->getSucChua;
}

void Toa::setSucChua(int sucChua)
{
    this->sucChua = sucChua;
}

string Toa::getToa()
{
    return this->toa;
}

void Toa::setToa(string toa)
{
    this->toa = toa;
}

int Toa::getSoLuongPhong()
{
    return this->phong.size();
}

vector <Phong>* Toa::getPhong()
{
    return &(this->phong);
};

Phong* Toa::getPhongTrong()
{
    for (auto x: this->phong)
        if (x.getSoLuongSinhVien < x.getSucChua)
            return &x;
            
    return NULL;
}