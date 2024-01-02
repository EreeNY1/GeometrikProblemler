#include "Nokta.h"
#include "Nokta.h"
#include <cmath>

Nokta::Nokta() : x(0.0), y(0.0) {}

Nokta::Nokta(double deger) : x(deger), y(deger) {}

Nokta::Nokta(double x_, double y_) : x(x_), y(y_) {}

Nokta::Nokta(const Nokta& digeri) : x(digeri.x), y(digeri.y) {}

Nokta::Nokta(const Nokta& digeri, double ofset_x, double ofset_y) : x(digeri.x + ofset_x), y(digeri.y + ofset_y) {}

void Nokta::setX(double x_) { x = x_; }

double Nokta::getX() const { return x; }

void Nokta::setY(double y_) { y = y_; }

double Nokta::getY() const { return y; }

void Nokta::setCoordinates(double _x, double _y) { x = _x; y = _y; }

std::string Nokta::toString() const {
    std::stringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}

void Nokta::yazdir() const {
    std::cout << "Noktanin koordinatlari: " << toString() << std::endl;
}
