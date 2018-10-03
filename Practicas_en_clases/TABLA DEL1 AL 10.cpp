//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <math.h>//Para las operaciones matematicas
#include <windows.h > //para lograr reproducir el sonido
 using namespace std;

int main(int argc, char** argv) {
	system("color 71"); //Asisgnar color a la consola "7" fondo de consola y "1" color de letra
	

	
	int i ; //variable para el primer numero a multiplicar
	int j ; //variable para el segundo numero a multiplicar
	 
	 cout <<"TABLAS DE MULTIPLICAR "<<endl<<endl;
	
	for (int i=1 ; i<=10 ; i++){ //valor de 10 para multiplicar
	 cout <<endl <<"TABLA DEL : "<<i <<endl ;
		
		for ( int j=1 ; j<=10 ; j++ )  //valor a multiplicar en 10
			
			cout << i << "x" << j << " = "<< i*j<<endl; //impresion del proceso
	}


	
	return 0;
}
