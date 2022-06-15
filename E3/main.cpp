#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Figura * figure = NULL;
    Circulo circle(2);
    Rectangulo rect(2, 3);
    figure = &circle;
    cout<<"Circulo: "<<figure->calcularArea()<<endl;
    figure = &rect;
    cout<<"Rectangulo: "<<figure->calcularArea()<<endl;

	return 0;
}
