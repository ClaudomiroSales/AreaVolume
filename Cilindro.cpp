#include "Cilindro.h"

Cilindro::Cilindro( double x, double y, double raio, double altura )
:Circulo( x, y, raio )
{
	if( altura > 0 )
		this->altura = altura;
	else
		altura = 1;
}

Cilindro::~Cilindro()
{
}

ostream &operator<<( ostream &out, const Cilindro &cil )
{
	out << 	"Base: " << static_cast< Circulo >( cil ) << '\n';
	out << "A altura eh " << cil.altura;
		
	return out;
}
