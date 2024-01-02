#include "DogruParcasi.h"
#include <cmath>

DogruParcasi::DogruParcasi(const Nokta& baslangic, const Nokta& bitis) : baslangicNoktasi(baslangic), bitisNoktasi(bitis) {}

DogruParcasi::DogruParcasi(const DogruParcasi& digeri) : baslangicNoktasi(digeri.baslangicNoktasi), bitisNoktasi(digeri.bitisNoktasi) {}

DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    double deltaX = uzunluk / 2 * cos(atan(egim));
    double deltaY = uzunluk / 2 * sin(atan(egim));

    double x1 = ortaNokta.getX() - deltaX;
    double y1 = ortaNokta.getY() - deltaY;
    double x2 = ortaNokta.getX() + deltaX;
    double y2 = ortaNokta.getY() + deltaY;

    baslangicNoktasi = Nokta(x1, y1);
    bitisNoktasi = Nokta(x2, y2);
}

double DogruParcasi::uzunluk() const {
    return sqrt(pow(bitisNoktasi.getX() - baslangicNoktasi.getX(), 2) + pow(bitisNoktasi.getY() - baslangicNoktasi.getY(), 2));
}

Nokta DogruParcasi::kesisimNoktasi(const Nokta& digerNokta) const {
    return Nokta();
}

Nokta DogruParcasi::ortaNokta() const {
    double ortaX = (baslangicNoktasi.getX() + bitisNoktasi.getX()) / 2;
    double ortaY = (baslangicNoktasi.getY() + bitisNoktasi.getY()) / 2;
    return Nokta(ortaX, ortaY);
}

std::string DogruParcasi::toString() const {
    int intBasX = static_cast<int>(baslangicNoktasi.getX());
    int intBasY = static_cast<int>(baslangicNoktasi.getY());
    int intBitX = static_cast<int>(bitisNoktasi.getX());
    int intBitY = static_cast<int>(bitisNoktasi.getY());

    std::stringstream ss;
    ss << "Baslangic Noktasi: (" << intBasX << ", " << intBasY << ") - "
        << "Bitis Noktasi: (" << intBitX << ", " << intBitY << ")";
    return ss.str();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}

void DogruParcasi::setP1(const Nokta& nokta) {
    baslangicNoktasi = nokta;
}
