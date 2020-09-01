//
// Created by Norlan on 1/9/2020.
//
#include "NavajaSuizaGodClass.h"
#include "Navaja.h"
#include <string>
int main() {

    //Lo que no se debe hacer (Antipatron) "NavajaGodClass"

    std::cout << "NavajaGodClass: (lo que no se debe hacer) \n";
    NavajaSuizaGodClass navajasgc;

    std::cout << navajasgc.cortar();
    std::cout << navajasgc.recortar();
    std::cout << navajasgc.abrir();
    std::cout << navajasgc.descorchar();
    std::cout << navajasgc.destornillar();

    //Aplicando el principio de unica responsabilidad...

    //Funciones...
    Tijera tijeras;
    Cuchilla cuchilla;
    Destornillador _destornillador;
    Descorchador _descorchador;
    Abridor abridor;

    std::cout <<"\nUsando el principio de unica responsabilidad...\n";
    std::cout << cuchilla.cortar();
    std::cout << tijeras.recortar();
    std::cout << abridor.Abrir();
    std::cout << _descorchador.descorchar();
    std::cout << _destornillador.destornillar();



    return 0;
}