#include <iostream>
#include "NhomA.h"
#include "NhomB.h"
#include "NhomAB.h"
#include "NhomO.h"

using namespace std;

int main() {
    int n, chon;
    NhomMau* list[50];

    cout << "Nhap so nguoi: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Chon nhom mau (1: O, 2: A, 3: B, 4: AB): ";
        cin >> chon;
        
        if (chon == 1) {
            list[i] = new NhomO();
        } else if (chon == 2) {
            list[i] = new NhomA();
        } else if (chon == 3) {
            list[i] = new NhomB();
        } else if (chon == 4) {
            list[i] = new NhomAB();
        } else {
            cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
            i--;  // Yêu cầu nhập lại nếu chọn sai
            continue;
        }
        
        list[i]->Nhap();
    }

    int cha, me, con;
    cout << "Nhap chi so cha, me, con: ";
    cin >> cha >> me >> con;
    bool KQ = list[cha]->KTDiTruyen(list[me]->LayTen(), list[con]->LayTen());
    cout << "KQ: " << (KQ ? "Co the di truyen" : "Khong di truyen") << endl;

    int x;
    cout << "Nhap vi tri x: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (i != x && list[x]->TuongThich(list[i]->LayTen(), list[i]->GetRh())) {
            cout << "Tuong thich voi vi tri: " << i << endl;
        }
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < n; i++) {
        delete list[i];
    }

    return 0;
}
