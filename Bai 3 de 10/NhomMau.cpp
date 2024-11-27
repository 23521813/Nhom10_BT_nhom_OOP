#include <bits/stdc++.h>
#include "NhomMau.h"
using namespace std;

NhomMau::NhomMau() {}
NhomMau::~NhomMau() {}

void NhomMau::Nhap() {
    char t;
    cout << "Nhap Rhesus (+/-): ";
    cin >> t;
    Rh = (t == '+');
}

bool NhomMau::LayRh() {
    return Rh;
}
