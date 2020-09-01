//
// Created by Rafa Cerdas on 9/1/20.
//

#include "destornillador.h"


destornillador::destornillador() {

    tamano=0.0;
    tipo=" ";

}
destornillador::destornillador(const double &tamano, const string &tipo) : tamano(tamano), tipo(tipo) {}

const double &destornillador::getTamano() const {
    return tamano;
}

const string &destornillador::getTipo() const {
    return tipo;
}

void destornillador::setTamano(const double &tamano) {
    destornillador::tamano = tamano;
}

void destornillador::setTipo(const string &tipo) {
    destornillador::tipo = tipo;
}
string destornillador::destornillar()
{
    return "destornillando....\n";
}
destornillador::~destornillador() {

}





