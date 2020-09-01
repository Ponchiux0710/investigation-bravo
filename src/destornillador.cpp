//
// Created by Rafa Cerdas on 9/1/20.
//

#include "destornillador.h"


Destornillador::Destornillador() {

    tamano=0.0;
    tipo=" ";

}
Destornillador::Destornillador(const double &tamano, const string &tipo) : tamano(tamano), tipo(tipo) {}

const double &Destornillador::getTamano() const {
    return tamano;
}

const string &Destornillador::getTipo() const {
    return tipo;
}

void Destornillador::setTamano(const double &tamano) {
    Destornillador::tamano = tamano;
}

void Destornillador::setTipo(const string &tipo) {
    Destornillador::tipo = tipo;
}
string Destornillador::destornillar()
{
    return "destornillando....\n";
}
Destornillador::~Destornillador() {

}





