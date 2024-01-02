#pragma once
#include <iostream>
#include <sstream>

class Nokta {
private:
    double x;
    double y;

public:
    Nokta();
    Nokta(double deger);
    Nokta(double x_, double y_);
    Nokta(const Nokta& digeri);
    Nokta(const Nokta& digeri, double ofset_x, double ofset_y);

    void setX(double x_);
    double getX() const;
    void setY(double y_);
    double getY() const;
    void setCoordinates(double _x, double _y);
    std::string toString() const;
    void yazdir() const;
};


