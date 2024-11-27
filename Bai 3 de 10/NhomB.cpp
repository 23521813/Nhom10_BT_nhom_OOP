#include <bits/stdc++.h>
#include "NhomB.h"

NhomB::NhomB() {}
NhomB::~NhomB() {}

char NhomB::LayTen() {
    return 'B';
}

bool NhomB::KTDiTruyen(char me, char con) {
    if (me == 'A') {
        if (con == 'A' || con == 'B' || con == 'O') {
            return true;
        }
    } else if (me == 'B') {
        if (con == 'B' || con == 'O') {
            return true;
        }
    } else if (me == 'O') {
        if (con == 'B' || con == 'O') {
            return true;
        }
    }
    return false;
}

bool NhomB::TuongThich(char nm, bool b) {
    if (!LayRh() && (nm == 'B' || nm == 'C')) {
        return true;
    }
    if (LayRh() && b && (nm == 'A' || nm == 'C')) {
        return true;
    }
    return false;
}
