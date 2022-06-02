#include "Toa.h"

Toa::Toa() {}

Toa::Toa(string toa)
{
    this->toa = toa;
}

Toa::~Toa()
{
    phong.clear();
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