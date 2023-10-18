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
	
	Circulo circulo1( 4.5, 9.5, -7.9 );
	cout << "O circulo1 ( 4.5, 9.5, -7.9 )" << '\n';
	cout << circulo1 << "\n";
	cout << "A area do circulo1 eh " << circulo1.calcArea() << "\n\n";
	
	//Usando o construtor de cópia
	Circulo circulo2( circulo1 );
	cout << "circulo2( circulo1 ) - ( 4.5, 9.5, -7.9 )" << '\n';
	cout << "O circulo2\n" << circulo2 << "\n";
	cout << "A area do circulo2 eh " << circulo2.calcArea() << "\n\n";
	
	//Usando atribuição
	cout << "Antes da atribuicao circulo3" << '\n';
	Circulo circulo3;
	cout << "circulo3\n" << circulo3 << "\n";
	cout << "Area do circulo3 eh " << circulo3.calcArea() << "\n\n";	
	
	circulo3 = circulo1;	
	
	cout << "O circulo3\n" << circulo3 << "\n";
	cout << "Area do circulo3 eh " << circulo3.calcArea() << "\n\n";	
	
	
	Cilindro cilindro1( 4.5, 8.9, 3.9, -4.1 );
	cout << "O cilindro1" << '\n';
	cout << cilindro1 << "\n";
	cout << "A area da base eh " << cilindro1.calcArea() << "\n";
	cout << "O volume do cilindro1 eh " << cilindro1.calcVolume() <<"\n\n";
	
	Cilindro cilindro2( cilindro1 );
	cout << "cilindro2( cilindro1 )" << '\n';
	cout << "O cilindro2\n" << cilindro2 << "\n";
	cout << "A area da base eh " << cilindro2.calcArea() << "\n";
	cout << "O volume eh " << cilindro2.calcVolume() <<"\n\n";
	
	
	Cilindro cilindro3;
	cout << "cilindro3 antes da atribuicao" << '\n';
	cout << "O cilindro3\n" << cilindro3 << "\n";
	cout << "A area da base eh " << cilindro3.calcArea() << "\n";
	cout << "O volume eh " << cilindro3.calcVolume() <<"\n\n";
	
	cilindro3 = cilindro1;
	
	cout << "O cilindro3 depois da atribuicao\n" << cilindro3 << "\n";
	cout << "A area da base eh " << cilindro3.calcArea() << "\n";
	cout << "O volume eh " << cilindro3.calcVolume() <<"\n\n";
	
	
	
	return 0;
}
