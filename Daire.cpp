#include "Daire.h"
#include <cmath>

Daire::Daire(const Nokta& merkez, double r) : merkezNokta(merkez), yaricap(r) {}

Daire::Daire(const Daire& digeri) : merkezNokta(digeri.merkezNokta), yaricap(digeri.yaricap) {}

Daire::Daire(const Daire& digeri, double x) : merkezNokta(digeri.merkezNokta), yaricap(x* digeri.yaricap) {}

double Daire::alan() const {
    return 3.14 * yaricap * yaricap;
}

double Daire::cevre() const {
    return 2 * 3.14 * yaricap;
}

int Daire::kesisim(const Daire& digerDaire) const {
    double merkezlerArasiUzaklik = sqrt(pow(digerDaire.merkezNokta.getX() - merkezNokta.getX(), 2) +
        pow(digerDaire.merkezNokta.getY() - merkezNokta.getY(), 2));

    if (merkezlerArasiUzaklik == 0 && yaricap == digerDaire.yaricap) {
        return 1;
    }
    else if (merkezlerArasiUzaklik < yaricap + digerDaire.yaricap &&
        merkezlerArasiUzaklik > abs(yaricap - digerDaire.yaricap)) {
        return 0;
    }
    else {
        return 2;
    }
}

std::string Daire::toString() const {
    return "Merkez Noktasi: " + merkezNokta.toString() + " - Yaricap: " + std::to_string(static_cast<int>(yaricap));
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}
