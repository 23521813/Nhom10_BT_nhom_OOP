#include <bits/stdc++.h>
#include "NhomA.h"
#include "NhomB.h"
#include "NhomAB.h"
#include "NhomO.h"

using namespace std;

NhomMau* ds[181205];
int main() {
    int n;
    
    // Yeu cau 1:
    cout << "Thuc hien yeu cau 1: " << endl;
    
    cout << "Nhap so nguoi: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Nhap thong tin cho nguoi " << i << " la:" << endl;
        cout << "Chon nhom mau (1: O, 2: A, 3: B, 4: AB): ";
        int chon;
        cin >> chon;

        if (chon == 1) {
            ds[i] = new NhomO();
        } else if (chon == 2) {
            ds[i] = new NhomA();
        } else if (chon == 3) {
            ds[i] = new NhomB();
        } else if (chon == 4) {
            ds[i] = new NhomAB();
        } else {
            cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
            i--; 
            continue;
        }

        ds[i]->Nhap();
    }
    
    // Yeu cau 2:
    cout << "Thuc hien yeu cau 2: " << endl;
    
    int cha, me, con;
    cout << "Nhap chi so cha, me, con: ";
    cin >> cha >> me >> con;
    bool KQ = ds[cha]->KTDiTruyen(ds[me]->LayTen(), ds[con]->LayTen());
    cout << "KQ: " << (KQ ? "Co the di truyen" : "Khong di truyen") << endl;
    
    // Yeu cau 3:
    cout << "Thuc hien yeu cau 3: " << endl;
    
    int x;
    cout << "Nhap vi tri x: ";
    cin >> x;
    vector<int> memo;
    for (int i = 1; i <= n; i++) {
        if (i != x && ds[x]->TuongThich(ds[i]->LayTen(), ds[i]->LayRh())) {
            memo.push_back(i);
        }
    }
    
    if (memo.empty()) {
        cout << "Khong co ai co the truyen mau cho x" << endl;
    } else {
        cout << "Nhung nguoi khac co the truyen mau cho x la: ";
        for (auto x : memo) {
            cout << x << " ";
        }
    }
    
    return 0;
}
