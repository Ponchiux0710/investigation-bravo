//
// Created by Norlan on 1/9/2020.
//

#include "Cuchilla.h"

Cuchilla::Cuchilla(int tamanho) : tamanho(tamanho) {}

Cuchilla::~Cuchilla() {

}

int Cuchilla::getTamanho() const {
    return tamanho;
}

void Cuchilla::setTamanho(int tamanho) {
    Cuchilla::tamanho = tamanho;
}

std::string Cuchilla::cortar() {
    return "Cortando";

}
