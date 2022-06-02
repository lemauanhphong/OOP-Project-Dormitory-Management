#include "human.h"

human::human()
{
    //ctor
}

human::~human()
{
    //dtor
}
human::human(string Ten,string Id,string Sdt) : ten(Ten), id(Id), sdt(Sdt)
{

}
string human::getTen()
{
    return ten;
}
string human::getId()
{
    return  id;
}
string human::getSdt()
{
    return sdt;
}
void human::setTen(string a)
{
    ten = a;
}
void human::setId(string a)
{
    id = a;
}
void human::setSdt(string a)
{
    sdt = a;
}
