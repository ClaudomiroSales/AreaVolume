#include "Ponto.h"

Ponto::Ponto( )
: x(0), y(0)
{
	
}

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

const Ponto &Ponto::operator= ( const Ponto &pOut )
{
	this->x = pOut.x;
	this->y = pOut.y;
	
	return *this;
}

ostream &operator<<( ostream &out, const Ponto &p )
{
	out << '(' << p.x << ',' << p.y << ')';	
	
	return out;
}