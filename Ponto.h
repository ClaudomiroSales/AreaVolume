#ifndef PONTO_H
#define PONTO_H

#include <iostream>
using std::ostream;

class Ponto
{
	friend ostream &operator<<( ostream &, const Ponto & );
public:
	Ponto( );
	Ponto( double, double );
	Ponto( const Ponto & );
	~Ponto();
	
	const Ponto &operator= ( const Ponto & );
	
	virtual double calcArea( ) = 0;
	
	
protected:

	double x;
	double y;

};

#endif // PONTO_H
