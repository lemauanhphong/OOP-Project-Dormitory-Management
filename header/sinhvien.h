#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <bits/stdc++.h>
#include "human.h"
using namespace std;


class sinhvien : public human
{
    public:
        sinhvien();
        ~sinhvien();
        void thong_tin();
        string phong();

    protected:
        string mssv;
        string truong;
        string toa_ktx; /// toa ktx sinh vien dang o
        string khoa;
        int room; /// phong o bn

    private:
};

#endif // SINHVIEN_H
