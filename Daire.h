#pragma once
#include "Nokta.h"
#include <iostream>

using namespace std;

class Daire {
private:
    Nokta merkezNokta;
    double yaricap;

public:
    Daire(const Nokta& merkez, double r);
    Daire(const Daire& digeri);
    Daire(const Daire& digeri, double x);

    double alan() const;
    double cevre() const;
    int kesisim(const Daire& digerDaire) const;
    string toString() const;
    void yazdir() const;
};

