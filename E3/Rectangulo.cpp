//
// Created by Usuario on 6/14/2022.
//

#include "Rectangulo.h"

double Rectangulo::calcularArea() {
    return this->height * this->width;
}

double Rectangulo::calcularPerimetro() {
    return this->height * 2 + this->width * 2;
}