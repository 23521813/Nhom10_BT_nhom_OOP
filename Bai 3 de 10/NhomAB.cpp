#include "NhomAB.h"

NhomAB::NhomAB() {}
NhomAB::~NhomAB() {}

char NhomAB::LayTen() {
    return 'C';
}

bool NhomAB::KTDiTruyen(char me, char con) {
    if (me == 'A') {
        if (con == 'A' || con == 'B' || con == 'C') {
            return true;
        }
    } else if (me == 'B') {
        if (con == 'A' || con == 'B' || con == 'C') {
            return true;
        }
    } else if (me == 'O') {
        if (con == 'A' || con == 'B') {
            return true;
        }
    }
    return false;
}

bool NhomAB::TuongThich(char nm, bool b) {
    if (!GetRh() && nm == 'C') {
        return true;
    }
    if (GetRh() && b && nm == 'C') {
        return true;
    }
    return false;
}