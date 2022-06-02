#include <bits/stdc++.h>
#include "KTX.h"
using namespace std;

KTX::KTX(string ten, string diaChi, string SDT, string email, vector <Toa> toa) {
    this->ten = ten;
    this->diaChi = diaChi;
    this->SDT = SDT;
    this->email = email;
    this->toa = toa;
}

KTX::~KTX() {
    this->toa.clear();
}

string KTX::getTen() {
    return this->ten;
}
string KTX::getDiaChi() {
    return this->diaChi;
}
string KTX::getSDT() {
    return this->SDT;
}
string KTX::getEmail() {
    return this->email;
}
int KTX::getSoLuongToa() {
    return this->toa.size();
};

void KTX::setTen(string ten) {
    this->ten = ten;
}
void KTX::setDiaChi(string diaChi) {
    this->diaChi = diaChi;
}
void KTX::setSDT(string SDT) {
    this->SDT = SDT;
}
void KTX::setEmail(string email) {
    this->email = email;
}

void KTX::inThongTinKTX() {
    cout << "Ten: " << this->ten << endl;
    cout << "Dia chi: " << this->diaChi << endl;
    cout << "SDT: " << this->SDT << endl;
    cout << "Email: " << this->email << endl;
}

void KTX::suaThongTinKTX() {
    string input;

    cout << "Nhap ten: ";
    cin.ignore();
    cin >> input;
    setTen(input);

    cout << "Nhap dia chi: ";
    cin >> input;
    setDiaChi(input);

    cout << "Nhap SDT: ";
    cin >> input;
    setSDT(input);

    cout << "Nhap Email: ";
    cin >> input;
    setEmail(input);
}

void KTX::inThongTinToa() {
    cout << "Danh sach cac toa KTX: " << endl;
    for (int i = 0; i < getSoLuongToa(); ++i) {
        cout << i << ". Toa " << this->toa[i].getToa() << endl;
    }

    cout << "Vui long chon 1 toa de xem thong tin (0,1,2,...): ";
    int soToa;
    cin >> soToa;
    toa[soToa].inThongTinToa();
}

void KTX::inThongTinPhong() {
    cout << "Danh sach cac toa KTX: " << endl;
    for (int i = 0; i < getSoLuongToa(); ++i) {
        cout << i << ". Toa " << this->toa[i].getToa() << endl;
    }

    cout << "Vui long chon 1 toa de xem thong tin (0,1,2,...): ";
    int selection;
    cin >> selection;
    toa[selection].inThongTinPhong();
}

void KTX::dangKySinhVien() {
    bool conTrong = false;

    cout << "Danh sach cac toa con trong:" << endl;
    for (int i = 0; i < getSoLuongToa(); ++i)
        if (!toa[i].conTrong()) {
            cout << i << ". Toa " << this->toa[i].getToa() << endl;
            conTrong = true;
        }

    if (!conTrong) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de dang ki (1,2,3,...): ";
    int soToa;
    cin >> soToa;
    toa[soToa].dangKySinhVien();
}

void KTX::huyDangKySinhVien() {
    bool trong = true;

    cout << "Danh sach cac toa da co sinh vien dang ky:" << endl;
    for (int i = 0; i < getSoLuongToa(); ++i)
        if (!toa[i].trong()) {
            cout << i << ". Toa " << this->toa[i].getToa() << endl;
            trong = false;
        }

    if (trong) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de dang ki (1,2,3,...): ";
    int soToa;
    cin >> soToa;
    toa[soToa].huyDangKySinhVien();

}
