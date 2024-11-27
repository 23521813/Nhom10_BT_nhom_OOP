#include <bits/stdc++.h>
#include "NhomA.h"

NhomA::NhomA() {}
NhomA::~NhomA() {}

char NhomA::LayTen() {
    return 'A';
}

bool NhomA::KTDiTruyen(char me, char con) {
    if (me == 'A') {
        if (con == 'A' || con == 'O') {
            return true;
        }
    } 
    if (me == 'B') {
        if (con == 'A' || con == 'B' || con == 'C' || con == 'O') {
            return true;
        }
    }  
    if (me == 'C') {
        if (con == 'A' || con == 'B' || con == 'C') {
            return true;
        }
    }  
    if (me == 'C') {
        if (con == 'A' || con == 'O') {
            return true;
        }
    }      
    return false;
}

bool NhomA::TuongThich(char nm, bool b) {
    if (!LayRh() && (nm == 'B' || nm == 'C')) {
        return true;
    }
    if (LayRh() && b && (nm == 'A' || nm == 'C')) {
        return true;
    }
    return false;
}

