//
// Created by Usuario on 6/8/2022.
//

#ifndef E3_CIRCULO_H
	
	#define E3_CIRCULO_H
	
	#include "IFigura.h"
	
	using namespace std;

	class Circulo : public IFigura 
	{
		private:
			double radio;
		
		public:
    		Circulo(double radio);
    		virtual ~Circulo();
    
		    virtual double calcularPerimetro();
    		virtual double calcularArea();

	};

#endif //E3_CIRCULO_H
