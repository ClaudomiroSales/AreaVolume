#ifndef PONTO_H
#define PONTO_H

#include <iostream>
using std::ostream;

class Ponto
{
	friend ostream &operator<<( ostream &, const Ponto & );
public:
	Ponto( double = 0.0, double = 0.0 );
	Ponto( const Ponto & );
	~Ponto();
	
private:

	double x;
	double y;

};

#endif // PONTO_H
