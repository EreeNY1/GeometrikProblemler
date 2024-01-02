#pragma once
#include "Nokta.h"

using namespace std;
class DogruParcasi {
private:
    Nokta baslangicNoktasi;
    Nokta bitisNoktasi;

public:
    DogruParcasi(const Nokta& baslangic, const Nokta& bitis);
    DogruParcasi(const DogruParcasi& digeri);
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim);

    double uzunluk() const;
    Nokta kesisimNoktasi(const Nokta& digerNokta) const;
    Nokta ortaNokta() const;
    string toString() const;
    void yazdir() const;
    void setP1(const Nokta& nokta);
};


