#ifndef KTX_H_INCLUDED
#define KTX_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;
/*
class Toa {
    void getPhong(int id);
    void getIdPhongTrong();
};

class Phong {};

class SinhVien {};
*/
class KTX {
    string name;
    string address;
    string phoneNumber;
    string email;
    vector <Toa> toa;
public:
    KTX(string _name, string _address, string _phoneNumber, string _email, vector <Toa> _toa);
    ~KTX();

    int getSoLuongToa();
    Toa getToa(int id);
    void setToa(int id, Toa obj);
    void addToa(Toa toa);
    void deleteToa(int id);


    Phong getPhong(int toaId, int phongId);
    pair <int, int> getIdPhongTrong(int toaId);

    void xepPhong(SinhVien sinhvien, int toaId, int phongId);
    void xepPhongTuDong(SinhVien sinhvien, int toaId);
};

#endif // KTX_H_INCLUDED
