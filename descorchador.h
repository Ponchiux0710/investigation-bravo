//
// Created by Rafa Cerdas on 9/1/20.
//

#ifndef BASIC_00_EXAMPLE_DESCORCHADOR_H
#define BASIC_00_EXAMPLE_DESCORCHADOR_H

#include <iostream>
#include <string>
using namespace std;
class descorchador {

private:
    double tamano;

public:

    descorchador();
    descorchador(double tamano);

    void setTamano(const double &tamano);

    double getTamano() const;

    static string descorchar();

    virtual ~descorchador();
};


#endif //BASIC_00_EXAMPLE_DESCORCHADOR_H
