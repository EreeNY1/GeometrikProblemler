#include "Ucgen.h"
#include "Ucgen.h"
#include <cmath>

Ucgen::Ucgen(const Nokta& n1, const Nokta& n2, const Nokta& n3)
    : nokta1(n1), nokta2(n2), nokta3(n3) {}

Nokta Ucgen::getNokta1() const {
    return nokta1;
}

Nokta Ucgen::getNokta2() const {
    return nokta2;
}

Nokta Ucgen::getNokta3() const {
    return nokta3;
}

void Ucgen::setNokta1(const Nokta& n1) {
    nokta1 = n1;
}

void Ucgen::setNokta2(const Nokta& n2) {
    nokta2 = n2;
}

void Ucgen::setNokta3(const Nokta& n3) {
    nokta3 = n3;
}

std::string Ucgen::toString() const {
    return "Üçgen; " + nokta1.toString() + ", " + nokta2.toString() + ", " + nokta3.toString();
}

double Ucgen::alan() const {
    double a = sqrt(pow(nokta2.getX() - nokta1.getX(), 2) + pow(nokta2.getY() - nokta1.getY(), 2));
    double b = sqrt(pow(nokta3.getX() - nokta2.getX(), 2) + pow(nokta3.getY() - nokta2.getY(), 2));
    double c = sqrt(pow(nokta1.getX() - nokta3.getX(), 2) + pow(nokta1.getY() - nokta3.getY(), 2));
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Ucgen::cevre() const {
    double a = sqrt(pow(nokta2.getX() - nokta1.getX(), 2) + pow(nokta2.getY() - nokta1.getY(), 2));
    double b = sqrt(pow(nokta3.getX() - nokta2.getX(), 2) + pow(nokta3.getY() - nokta2.getY(), 2));
    double c = sqrt(pow(nokta1.getX() - nokta3.getX(), 2) + pow(nokta1.getY() - nokta3.getY(), 2));
    return a + b + c;
}

double* Ucgen::acilar() const {
    double a = sqrt(pow(nokta2.getX() - nokta1.getX(), 2) + pow(nokta2.getY() - nokta1.getY(), 2));
    double b = sqrt(pow(nokta3.getX() - nokta2.getX(), 2) + pow(nokta3.getY() - nokta2.getY(), 2));
    double c = sqrt(pow(nokta1.getX() - nokta3.getX(), 2) + pow(nokta1.getY() - nokta3.getY(), 2));

    static double angles[3];
    angles[0] = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / 3.14);
    angles[1] = acos((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / 3.14);
    angles[2] = 180.0 - angles[0] - angles[1];
    return angles;
}
