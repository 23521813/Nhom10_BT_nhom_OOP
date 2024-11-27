#ifndef NHOMAB_H
#define NHOMAB_H

#include "NhomMau.h"

class NhomAB : public NhomMau {
public:
    NhomAB();
    ~NhomAB();
    char LayTen() override;
    bool KTDiTruyen(char me, char con) override;
    bool TuongThich(char nm, bool b) override;
};

#endif
