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

vector <Phong*> Toa::getPhongTrong()
{
    vector <Phong*> ret;
    for (auto x: this->phong)
        if (x.getSoLuongSinhVien < x.getSucChua)
            ret.push_back(&x);
            
    return ret;
}

void Toa::xepPhong(Phong* a, SinhVien x)
{
    if (a->getSucChua > a->getSoLuongSinhVien && a->getToa == this->toa)
        a.add(x);
}

void Toa::add(int soPhong, int sucChua)
{
    if (!this->getPhongSo(soPhong))
        this->phong.push_back(Phong(soPhong, this->toa, this->setSucChua));
}

void Toa::add(int soPhong)
{
    for (int i = 0; i < this->phong.size(); ++i)
        if (this->phong[i].getSoPhong == soPhong)
            this->phong.erase(this->phong.begin() + i);
}

Phong* Toa::getPhongSo(int soPhong)
{
    for (auto x: this->phong)
        if (x.getSoPhong == soPhong)
            return &x;

    return NULL;
}