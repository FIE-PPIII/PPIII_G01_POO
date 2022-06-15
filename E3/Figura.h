//
// Created by Usuario on 6/8/2022.
//

#ifndef E3_FIGURA_H
	#define E3_FIGURA_H

	using namespace std;

	class Figura
	{
		public:

            Figura();
            ~Figura();

    		virtual double calcularPerimetro();
    		virtual double calcularArea();
	};


#endif //E3_FIGURA_H
