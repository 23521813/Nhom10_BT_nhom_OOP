#ifndef NHOMB_H
#define NHOMB_H

#include "NhomMau.h"

class NhomB : public NhomMau {
public:
    NhomB();
    ~NhomB();
    char LayTen() override;
    bool KTDiTruyen(char me, char con) override;
    bool TuongThich(char nm, bool b) override;
};

#endif
