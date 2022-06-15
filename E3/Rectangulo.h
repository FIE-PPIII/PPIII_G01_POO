//
// Created by Usuario on 6/14/2022.
//

#ifndef E3_RECTANGULO_H
    #define E3_RECTANGULO_H
    #include "Figura.h"

    using namespace std;

    class Rectangulo : public Figura {
        private:
            double height;
            double width;
        public:
            virtual double calcularArea();
            virtual double calcularPerimetro();

    };


#endif //E3_RECTANGULO_H
