#ifndef NHOMMAU_H
#define NHOMMAU_H

class NhomMau {
protected:
    bool Rh;
public:
    NhomMau();
    virtual ~NhomMau();
    void Nhap();
    bool GetRh();
    virtual bool KTDiTruyen(char, char);
    virtual char LayTen();
    virtual bool TuongThich(char nm, bool b);
};

#endif
