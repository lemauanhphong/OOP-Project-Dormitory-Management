#include <bits/stdc++.h>
#include "KTX.h"

void clrscr() {
    system("clear");
}

void menu() {
    KTX ktx;

    while (true) {
        clrscr();

        cout << "CHUONG TRINH QUAN LI KTX" << endl;
        cout << "1. In ra thong tin KTX" << endl;
        cout << "2. Sua thong tin KTX" << endl;
        cout << "3. In ra thong tin toa" << endl;
        cout << "4. In ra thong tin phong" << endl;
        cout << "5. Dang ki cho sinh vien moi" << endl;
        cout << "6. Huy dang ki cho sinh vien" << endl;
        cout << "7. Thoat" << endl;

        char selection;
        cin >> selection;

        switch (selection) {
            case '1':
                ktx.inThongTinKTX();
                break;
            case '2':
                ktx.suaThongTinKTX();
                break;
            case '3':
                ktx.inThongTinToa();
                break;
            case '4':
                ktx.inThongTinPhong();
                break;
            case '5':
                ktx.dangKySinhVien();
                break;
            case '6':
                ktx.huyDangKySinhVien();
                break;
            case '7':
                exit(0);
        }

        cin.ignore();
        cin.get();
    }
}

int main() {
    menu();
}
