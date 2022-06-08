//
// Created by Usuario on 6/8/2022.
//

#include <cmath>
#include "Circulo.h"

using namespace std;

Circulo::Circulo(double radio) 
{
	this->radio = radio;
}

Circulo::~Circulo() 
{}

double Circulo::calcularArea() 
{
	return M_PI * this->radio * this->radio;
}

double Circulo::calcularPerimetro() 
{
	return M_PI * 2 * this->radio;
}
