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
	
	//Usando o construtor de cópia
	Circulo c2( c );
	cout << "CopiaCirculo\n" << c2 << "\n";
	cout << "Sua area eh " << c2.calcArea() << "\n\n";
	
	
	Cilindro cil( 4.5, 8.9, 3.9, 4.1 );
	cout << cil << "\n";
	cout << "A area da base eh " << cil.calcArea() << "\n";
	cout << "O volume eh " << cil.calcVolume() <<"\n\n";
	
	Cilindro cil2( cil );
	cout << "CilinCopia\n" << cil2 << "\n";
	cout << "A area da base eh " << cil2.calcArea() << "\n";
	cout << "O volume eh " << cil2.calcVolume() <<"\n\n";
	
	return 0;
}
