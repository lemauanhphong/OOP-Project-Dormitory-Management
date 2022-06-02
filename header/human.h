#ifndef HUMAN_H
#define HUMAN_H
#include <bits/stdc++.h>
using namespace std;


class human
{

    public:
        human();
        ~human();
        string ho_ten(); /// ho ten nguoi
        int tuoi(); /// tuoi nguoi

    protected:
        string name;
        string cccd;
        int age;
};

#endif // HUMAN_H
