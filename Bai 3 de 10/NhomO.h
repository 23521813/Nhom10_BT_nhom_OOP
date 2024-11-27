#ifndef NHOMO_H
#define NHOMO_H

#include "NhomMau.h"

class NhomO : public NhomMau {
public:
    NhomO();
    ~NhomO();
    char LayTen() override;
    bool KTDiTruyen(char me, char con) override;
    bool TuongThich(char nm, bool b) override;
};

#endif
