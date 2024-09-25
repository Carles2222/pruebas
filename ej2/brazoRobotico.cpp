#include "BrazoRobotico.h"

// Constructor
BrazoRobotico::BrazoRobotico(double _x, double _y, double _z, bool _sujetando)
    : x(_x), y(_y), z(_z), sujetando(_sujetando) {}

// Métodos consultores (getters)
double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::estaSujetando() const {
    return sujetando;
}

// Método para coger un objeto
void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
    }
}

// Método para soltar un objeto
void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
    }
}

// Método para mover el brazo a una nueva posición
void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}
