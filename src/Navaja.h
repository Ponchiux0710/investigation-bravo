//
// Created by leoch on 1/9/2020.
//

#ifndef INVESTIGATION_BRAVO_NAVAJA_H
#define INVESTIGATION_BRAVO_NAVAJA_H
#include "Cuchilla.h"
#include "descorchador.h"
#include "destornillador.h"
#include "Tijeras.h"
#include "Abridor.h"

class Navaja {
private:
    Tijera tijeras;
    Cuchilla cuchilla;
    destornillador _destornillador;
    descorchador _descorchador;
    Abridor abridor;
public:
    Navaja();
    Navaja(Tijera,Cuchilla,destornillador,descorchador,Abridor);
    virtual ~Navaja();
    std::string cortar();
    std::string recortar();
    std::string destornillar();
    std::string descorchar();
    std::string abrir();
};


#endif //INVESTIGATION_BRAVO_NAVAJA_H
