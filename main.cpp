#include <iostream>
using std::cout;

#include "Ponto.h"
#include "Ponto.cpp"
#include "Circulo.h"
#include "Circulo.cpp"
#include "Cilindro.h"
#include "Cilindro.cpp"

int main(int argc, char **argv)
{
	Ponto p(2.3, 4.5);
	cout << "Ponto: " << p << "\n\n";
	
	Circulo c( 4.5, 9.5, -7.9 );
	cout << "c" << '\n';
	cout << c << "\n";
	cout << "Sua area eh " << c.calcArea() << "\n\n";
	
	//Usando o construtor de cópia
	Circulo c2( c );
	cout << "c2" << '\n';
	cout << "CopiaCirculo\n" << c2 << "\n";
	cout << "Sua area eh " << c2.calcArea() << "\n\n";
	
	//Usando atribuição
	cout << "c3" << '\n';
	Circulo c3;
	cout << "AtrCirculo\n" << c3 << "\n";
	cout << "Sua area eh " << c3.calcArea() << "\n\n";	
	
	c3 = c;	
	
	cout << "AtrCirculo\n" << c3 << "\n";
	cout << "Sua area eh " << c3.calcArea() << "\n\n";	
	
	
	Cilindro cil( 4.5, 8.9, 3.9, -4.1 );
	cout << "cil" << '\n';
	cout << cil << "\n";
	cout << "A area da base eh " << cil.calcArea() << "\n";
	cout << "O volume eh " << cil.calcVolume() <<"\n\n";
	
	Cilindro cil2( cil );
	cout << "cil2" << '\n';
	cout << "CilinCopia\n" << cil2 << "\n";
	cout << "A area da base eh " << cil2.calcArea() << "\n";
	cout << "O volume eh " << cil2.calcVolume() <<"\n\n";
	
	
	cout << "AtribCilindro\n\n";
	Cilindro cil3;
	cout << "cil3" << '\n';
	cout << "CilinCopia\n" << cil3 << "\n";
	cout << "A area da base eh " << cil3.calcArea() << "\n";
	cout << "O volume eh " << cil3.calcVolume() <<"\n\n";
	
	cil3 = cil;
	
	cout << "CilinCopia\n" << cil3 << "\n";
	cout << "A area da base eh " << cil3.calcArea() << "\n";
	cout << "O volume eh " << cil3.calcVolume() <<"\n\n";
	
	
	
	return 0;
}
