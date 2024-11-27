#include "NhomMau.h"
#include <iostream>
using namespace std;

NhomMau::NhomMau() {}
NhomMau::~NhomMau() {}

void NhomMau::Nhap() {
    char t;
    cout << "Nhap Rhesus (+/-): ";
    cin >> t;
    Rh = (t == '+');
}

bool NhomMau::GetRh() {
    return Rh;
}
