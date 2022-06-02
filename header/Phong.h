#include <bits/stdc++.h>
#include "SinhVien.h"

using namespace std;

class Phong
{
    private:
        int soPhong;
        string toa;
        int sucChua;
        vector <SinhVien> sinhVien;

    public:
        Phong();
        Phong(int soPhong = 1, string tenToa = "AH1", int sucChua = 4);
        ~Phong();
        int getSoPhong();
        void setSoPhong(int soPhong = 1);
        string getToa();
        void setToa(string tenToa = "lmao");
        int getSucChua();
        void setSucChua(int sucChua = 4);
        vector <SinhVien>* getSinhVien();
        int getSoLuongSinhVien();
        bool del(SinhVien a);
        // void find(SinhVien a);
        bool add(SinhVien a);
        bool isFull();
        bool isEmpty();
};