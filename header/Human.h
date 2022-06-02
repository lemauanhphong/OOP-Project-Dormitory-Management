#ifndef HUMAN_H
#define HUMAN_H
#include <bits/stdc++.h>
using namespace std;


class human
{

    public:
        human();
        human(string Ten ,string Id, string Sdt);/// have to input all parameter, so if it's bugged, it will be easy to find
        ~human();
        string getTen(); /// getter name
        void setTen(string a); ///setter name
        string getId(); ///getter id, id is cccd or cmnd
        void setId(string a); ///setter id
        string getSdt();/// getter sdt
        void setSdt(string a); ///setter Sdt

    protected:
        string ten;
        string id;
        string sdt;
};

#endif // HUMAN_H
