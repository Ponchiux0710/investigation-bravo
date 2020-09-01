//
// Created by Norlan on 1/9/2020.
//

#ifndef BASIC_00_EXAMPLE_CUCHILLA_H
#define BASIC_00_EXAMPLE_CUCHILLA_H
#include <iostream>

class Cuchilla {
private:
    int tamanho;
public:
    Cuchilla(int tamanho);

    virtual ~Cuchilla();

    int getTamanho() const;

    void setTamanho(int tamanho);

    std::string cortar();

};


#endif //BASIC_00_EXAMPLE_CUCHILLA_H
