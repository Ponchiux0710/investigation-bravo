//
// Created by leoch on 1/9/2020.
//

#include "Abridor.h"

Abridor::Abridor() {
    //Se crea un nuevo abridor
}

Abridor::~Abridor() {
    // Se destruye
}

std::string Abridor::Abrir() { //Responsabilidad unica de la clase
    return "Abriendo\n";
}