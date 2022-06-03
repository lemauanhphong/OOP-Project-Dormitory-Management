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

    if (!getSoLuongToa()) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de xem thong tin (0,1,2,...): ";
    int soToa;
    cin >> soToa;
    toa[soToa].inThongTinPhong();

    if (!toa[soToa].getSoLuongPhong()) {
        cout << "Khong co phong nao!" << endl;
        return;
    }
}

void KTX::inThongTinPhong() {
    cout << "Danh sach cac toa KTX: " << endl;
    for (int i = 0; i < getSoLuongToa(); ++i) {
        cout << i << ". Toa " << this->toa[i].getToa() << endl;
    }

    if (!getSoLuongToa()) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de xem thong tin (0,1,2,...): ";
    int soToa;
    cin >> soToa;
    toa[soToa].inThongTinPhong();

    if (!toa[soToa].getSoLuongPhong()) {
        cout << "Khong co phong nao!" << endl;
        return;
    }

    cout << "Vui long nhap so phong xem thong tin: ";
    int soPhong;
    cin >> soPhong;

    Phong* phong = toa[soToa].getPhongSo(soPhong);
    vector <SinhVien> *sinhVien = phong->getSinhVien();

    for (int i = 0; i < sinhVien->size(); ++i) {
        cout << "Sinh vien thu " << i << ":";
        sinhVien->at(i).thongTin();
        cout << endl;
    }
}

void KTX::dangKySinhVien() {
    bool conTrong = false;

    cout << "Danh sach cac toa con trong:" << endl;
    for (int i = 0; i < getSoLuongToa(); ++i)
        if (!toa[i].isFull()) {
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

    if (!toa[soToa].getSoLuongPhong()) {
        cout << "Khong co phong nao!" << endl;
        return;
    }

    cout << "Danh sach phong trong:" << endl;
    toa[soToa].inThongTinPhong();

    cout << "Vui long nhap so phong de dang ki: ";
    int soPhong;
    cin >> soPhong;

    SinhVien sinhVien;
    sinhVien.nhapThongTin();
    toa[soToa].xepPhong(toa[soToa].getPhongSo(soPhong), sinhVien);
}

void KTX::huyDangKySinhVien() {
    bool trong = true;

    cout << "Danh sach cac toa da co sinh vien dang ky:" << endl;
    for (int i = 0; i < getSoLuongToa(); ++i)
        if (!toa[i].isEmpty()) {
            cout << i << ". Toa " << this->toa[i].getToa() << endl;
            trong = false;
        }

    if (trong) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de tiep tuc (1,2,3,...): ";
    int soToa;
    cin >> soToa;

    if (!toa[soToa].getSoLuongPhong()) {
        cout << "Khong co phong nao!" << endl;
        return;
    }

    cout << "Danh sach phong:" << endl;
    toa[soToa].inThongTinPhong();

    cout << "Vui long nhap so phong de tiep tuc: ";
    int soPhong;
    cin >> soPhong;

    Phong* phong = toa[soToa].getPhongSo(soPhong);
    vector <SinhVien> *sinhVien = phong->getSinhVien();

    for (int i = 0; i < sinhVien->size(); ++i) {
        cout << "Sinh vien thu " << i << ":";
        sinhVien->at(i).thongTin();
        cout << endl;
    }

    cout << "Vui long chon 1 sinh vien de huy dang ki (0,1,2,..): ";
    int soSinhVien;
    cin >> soSinhVien;
    phong->del(sinhVien->at(soSinhVien));
}

void KTX::themToa() {
    cout << "Nhap so luong toa can them: ";
    int soLuongToa;
    cin >> soLuongToa;
    for (int i = 0; i < soLuongToa; ++i) {
        cout << "Nhap thong tin toa thu " << i + 1 << ":" << endl;

        cout << "Nhap ten toa: ";
        string ten;
        cin.ignore();
        cin >> ten;

        cout << "Nhap suc chua: ";
        int sucChua;
        cin >> sucChua;

        toa.push_back(Toa(ten, sucChua));
    }
}

void KTX::themPhong() {
    cout << "Danh sach cac toa KTX: " << endl;
    for (int i = 0; i < getSoLuongToa(); ++i) {
        cout << i << ". Toa " << this->toa[i].getToa() << endl;
    }

    if (!getSoLuongToa()) {
        cout << "Khong co toa nao!" << endl;
        return;
    }

    cout << "Vui long chon 1 toa de them phong (0,1,2,...): ";
    int soToa;
    cin >> soToa;

    cout << "Nhap so luong phong can them: ";
    int soLuongPhong;
    cin >> soLuongPhong;

    cout << "Nhap suc chua: ";
    int sucChua;
    cin >> sucChua;

    for (int i = 0; i < soLuongPhong; ++i) {
        int soPhong = toa[soToa].getSoLuongPhong() + i;
        toa[soToa].add(soPhong, sucChua);
    }
}
