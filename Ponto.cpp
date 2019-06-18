#include "Ponto.h"

Ponto::Ponto( double xout, double yout)
:x(xout), y(yout)
{
}

Ponto::Ponto( const Ponto &pout )
{
	this->x = pout.x;
	this->y = pout.y;
}

Ponto::~Ponto()
{
}

ostream &operator<<( ostream &out, const Ponto &p )
{
	out << '(' << p.x << ',' << p.y << ')';	
	
	return out;
}