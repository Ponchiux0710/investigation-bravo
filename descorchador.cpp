//
// Created by Rafa Cerdas on 9/1/20.
//

#include "descorchador.h"



descorchador::descorchador() {
    tamano=0.0;
}
descorchador::descorchador(double tamano) : tamano(tamano) {}

double descorchador::getTamano() const {
    return tamano;
}

void descorchador::setTamano(const double &tamano) {

}
static string descorchador::descorchar()
{
    return "desencorchando....";
}
descorchador::~descorchador() {

}



