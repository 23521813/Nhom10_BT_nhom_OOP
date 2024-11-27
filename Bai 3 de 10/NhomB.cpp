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
    if (!GetRh() && (nm == 'B' || nm == 'C')) {
        return true;
    }
    if (GetRh() && b && (nm == 'A' || nm == 'C')) {
        return true;
    }
    return false;
}
