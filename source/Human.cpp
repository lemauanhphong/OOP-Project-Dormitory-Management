#include "Human.h"

Human::Human()
{
    //ctor
}

Human::~Human()
{
    //dtor
}
Human::Human(string Ten,string Id,string Sdt) : ten(Ten), id(Id), sdt(Sdt)
{

}
string Human::getTen()
{
    return ten;
}
string Human::getId()
{
    return  id;
}
string Human::getSdt()
{
    return sdt;
}
void Human::setTen(string a)
{
    ten = a;
}
void Human::setId(string a)
{
    id = a;
}
void Human::setSdt(string a)
{
    sdt = a;
}
