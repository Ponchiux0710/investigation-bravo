//
// Created by Rafa Cerdas on 9/1/20.
//

#ifndef BASIC_00_EXAMPLE_DESTORNILLADOR_H
#define BASIC_00_EXAMPLE_DESTORNILLADOR_H

#include <iostream>
#include <string>

using namespace std;
class Destornillador {

private:
    double tamano;
    string tipo;

public:
    Destornillador();
    Destornillador(const double &tamano, const string &tipo);

    const double &getTamano() const;

    const string &getTipo() const;

    void setTamano(const double &tamano);

    virtual ~Destornillador();

    void setTipo(const string &tipo);

    static string destornillar();

};


#endif //BASIC_00_EXAMPLE_DESTORNILLADOR_H
