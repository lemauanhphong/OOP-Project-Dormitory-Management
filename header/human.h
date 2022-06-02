#ifndef HUMAN_H
#define HUMAN_H
#include <bits/stdc++.h>
using namespace std;


class human
{

    public:
        human();
        ~human();
        string ho_ten(); /// getter name
        int getAge(); /// getter age
        void setAge(int a); ///setter Age
        string getCccd(); ///getter cccd
        void setCccd(string a); ///setter cccd
        string getSdt();/// getter sdt
        void setSdt(string a); ///setter Sdt
        void nhap_du_lieu();

    protected:
        string Name;
        string Cccd;
        int Age;
        string Sdt;
};

#endif // HUMAN_H
