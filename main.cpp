#include <iostream>
using std::cout;

#include "Ponto.h"
#include "Circulo.h"
#include "Cilindro.h"

int main(int argc, char **argv)
{
	Ponto p(2.3, 4.5);
	cout << "Ponto: " << p << "\n\n";
	
	Circulo c( 4.5, 9.5, 7.9 );
	cout << c << "\n";
	cout << "Sua area eh " << c.calcArea() << "\n\n";
	
	Cilindro cil( 4.5, 8.9, 3.9, 4.1 );
	cout << cil << "\n";
	cout << "A area da base eh " << cil.calcArea() << "\n";
	cout << "O volume eh " << cil.calcVolume() <<"\n\n";
	
	return 0;
}
