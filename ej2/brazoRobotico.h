#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;  // Coordenadas en el espacio 3D
    bool sujetando;   // Indica si el robot está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double _x = 0, double _y = 0, double _z = 0, bool _sujetando = false);

    // Métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    // Método para coger un objeto
    void coger();

    // Método para soltar un objeto
    void soltar();

    // Método para mover el brazo a una nueva posición en el espacio 3D
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif // BRAZOROBOTICO_H
