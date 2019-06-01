#include "Circulo.h"

Circulo::Circulo( double xout, double yout, double raio )
:Ponto( xout, yout )
{
	if( raio > 0 )
		this->raio = raio;
	else
		raio = 1;
}

Circulo::~Circulo()
{
}

ostream &operator<<( ostream &out, const Circulo &c )
{
	out << 	"Centro: " << static_cast< Ponto >( c ) << '\t';
	out << "Raio: " << c.raio;
		
	return out;
}

