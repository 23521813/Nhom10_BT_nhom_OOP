#include <bits/stdc++.h>
#include "NhomO.h"

NhomO::NhomO() {}
NhomO::~NhomO() {}

char NhomO::LayTen() {
	return 'O';
}

bool NhomO::KTDiTruyen(char me, char con) {
	if (me == 'A') {
		if (con == 'A' || con == 'O') {
			return true;
		}
	} else if (me == 'B') {
		if (con == 'B' || con == 'O') {
			return true;
		}
	} else if (me == 'O') {
		if (con == 'O') {
			return true;
		}
	}
	return false;
}

bool NhomO::TuongThich(char nm, bool b) {
	if (!LayRh()) {
		return true;
	}
	if (b) {
		return true;
	}
	return false;
}