#ifndef NHOMMAU_H
#define NHOMMAU_H

class NhomMau {
protected:
	bool Rh;
public:
	NhomMau();
	virtual ~NhomMau();
	void Nhap();
	bool LayRh();
	virtual bool KTDiTruyen(char, char) = 0;
	virtual char LayTen() = 0;
	virtual bool TuongThich(char nm, bool b) = 0;
};

#endif
