#ifndef NHOMA_H
#define NHOMA_H

#include "NhomMau.h"

class NhomA : public NhomMau {
public:
    NhomA();
    ~NhomA();
    char LayTen() override;
    bool KTDiTruyen(char me, char con) override;
    bool TuongThich(char nm, bool b) override;
};

#endif
