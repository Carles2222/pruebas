#include <iostream>
#include "BrazoRobotico.h"

int main() {
    // Crear una instancia de la clase BrazoRobotico
    BrazoRobotico brazo(0.0, 0.0, 0.0);

    // Mostrar la posición inicial
    std::cout << "Posición inicial del brazo: (" 
              << brazo.getX() << ", " 
              << brazo.getY() << ", " 
              << brazo.getZ() << ")" << std::endl;

    // Mover el brazo a una nueva posición
    brazo.mover(10.5, 20.3, 5.8);
    std::cout << "Brazo movido a nueva posición: (" 
              << brazo.getX() << ", " 
              << brazo.getY() << ", " 
              << brazo.getZ() << ")" << std::endl;

    // Hacer que el brazo coja un objeto
    brazo.coger();
    std::cout << "El brazo ha cogido un objeto: " 
              << (brazo.estaSujetando() ? "Sí" : "No") << std::endl;

    return 0;
}
