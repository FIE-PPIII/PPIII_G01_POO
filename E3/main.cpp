#include <iostream>
#include "Circulo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Circulo circle(2);
    cout<<circle.calcularArea()<<endl;
	return 0;
}
