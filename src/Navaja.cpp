//
// Created by leoch on 1/9/2020.
//

#include "Navaja.h"

Navaja::Navaja(Tijera tijera,Cuchilla cuchilla1,Destornillador __destornillador ,Descorchador __descorchador, Abridor abridor1)
: tijeras(tijera), cuchilla(cuchilla1), _destornillador(__destornillador), _descorchador(__descorchador), abridor(abridor1) {

}

Navaja::Navaja(){

}

Navaja::~Navaja(){

}

std::string Navaja::cortar(){
    return cuchilla.cortar();
}
std::string Navaja::recortar(){
    return tijeras.recortar();
}
std::string Navaja::destornillar(){
   return _destornillador.destornillar();
}
std::string Navaja::descorchar(){
    return _descorchador.descorchar();
}
std::string Navaja::abrir(){
    return abridor.Abrir();
}
