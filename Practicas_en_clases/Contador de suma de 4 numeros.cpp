//Programa hecho por 
//CT18009 / Chavez Torres, Keny Lisbeth
//declararla, ejecutar y documentar
/* hacer un programa que permita calcular la suma de dos numeros o hasta 4 numeros utilizando funciones*/

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones

using namespace std ; //obligatoria

void  l (); /*ejecuta--- declaracion de funcion no retorna/no resibe ningun valor*/

int main () {
	
	//declaracion de variables
	int num = 1 ; //contador (permite llevar el control)
	int suma =0 ; //acumulador
	int aux ; //interaccion (realizar operacion de lectura), intercambio de valores temporales
	int vNum ; //su valor cambiara de 2-4
	
	do {
		
		l() ; //llamada de funcion
		cout <<"Cuantos numeros quiere sumar [1-4]"<<endl ; //saber que cantidad de numeros se quiere sumar
	cin >> vNum; //lectura de variable1	
	} while (vNum < 2 || vNum > 4); 

	
	while (num <= vNum) {
		
		l() ; //llamada de funcion
		
		cout <<"ingrese el numero "<<num<<endl ; //ingreso del numero a sumar
		cin >>aux ; //3 3
		suma = suma + aux ; //3 6
		num++ ; //2 3
	}
	l() ; //llamada de funcion
	cout <<"La suma es: "<<suma<<endl<<endl ; 
	
	system ("pause");
	return 0 ;
	
	
}
void l() {
		system ("cls") ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
	}

