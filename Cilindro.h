#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo.h"

class Cilindro : public Circulo
{
	friend ostream &operator<<( ostream &, const Cilindro & );
public:
	Cilindro( double = 0.0, double = 0.0, double = 0.0, double = 0.0 );
	Cilindro( const Cilindro & );
	~Cilindro();
	
	double calcVolume( ) { return altura * Circulo::calcArea( ); }
	
private:
	double altura;

};

#endif // CILINDRO_H
