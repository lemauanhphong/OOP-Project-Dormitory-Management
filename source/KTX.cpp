#include <bits/stdc++.h>
#include "KTX.h"
using namespace std;

KTX::KTX(string _name = "", string _address = "", string _phoneNumber = "", string _email = "", vector <Toa> _toa = vector <Toa> ()) {
    name = _name;
    address = _address;
    phoneNumber = _phoneNumber;
    email = _email;
    toa = _toa;
}

int KTX::getSoLuongToa() {
    return toa.size();
}

Toa KTX::getToa(int id) {
    return toa[id];
}

void KTX::setToa(int id, Toa obj) {
    toa[id] = obj;
}

void KTX::addToa(Toa obj) {
    toa.push_back(obj);
}

void KTX::deleteToa(int id) {
    toa.erase(toa.begin() + id);
}

Phong KTX::getPhong(int toaId, int phongId) {
    return getToa(toaId).getPhong(phongId);
}

pair <int, int> KTX::getIdPhongTrong(int toaId = -1) {
    if (toaId != -1)
        return make_pair(toaId, getToa(toaId).getIdPhongTrong());

    for (int i = 0; i < getSoLuongToa(); ++i) {
        int phongId = getToa(toaId).getIdPhongTrong();
        if (phongId != -1)
            return {toaId, phongId};
    }
}

void KTX::xepPhong(SinhVien sinhvien, int toaId, int phongId) {
    getToa(toaId).getPhong(phongId).addSinhVien(sinhvien);
}

void KTX::xepPhongTuDong(SinhVien sinhvien, int toaId = -1) {
    auto slot = getIdPhongTrong(toaId);
    getToa(slot.first).getPhong(slot.second).addSinhVien(sinhvien);
}
