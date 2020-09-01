//
// Created by leoch on 1/9/2020.
//

#include "Tijeras.h"

Tijera::Tijera() {
    //Se crea una Tijera
}

Tijera::~Tijera() {
    //Se destruye
}

std::string Tijera::recortar() { //Responsabilidad unica de la clase
    return "Cortando\n";
}