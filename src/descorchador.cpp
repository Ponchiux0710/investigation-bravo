//
// Created by Rafa Cerdas on 9/1/20.
//

#include "descorchador.h"



Descorchador::Descorchador() {
    tamano=0.0;
}
Descorchador::Descorchador(double tamano) : tamano(tamano) {}

double Descorchador::getTamano() const {
    return tamano;
}

void Descorchador::setTamano(const double &tamano) {

}
string Descorchador::descorchar()
{
    return "desencorchando....\n";
}
Descorchador::~Descorchador() {

}



