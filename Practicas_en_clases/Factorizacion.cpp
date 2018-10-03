//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <windows.h> //libreria para poder reproducir el sonido
using namespace std;

//inicio
int main() {
	
	system ("color 8a");
	Beep (900,500); //sonido del programa
	//declaracion de variables
	int num; //variable para el ingreso de numero a factorizar
	int fact = 1 ; //el valor de la factorizacion
	
	do { //ciclo que se usa para repetir el proceso sino se hace como es
		cout <<"ingrese el numero a factorizar"<< endl ; //Ingresar numero
		cin >>num; //lectura de variable
		
	}while (num<=0); //condicion
	
	for (int i=1 ; i<=num ; i++) { //validacion para un ciclo y condicion para la factorizacion
		fact=fact*i; //multiplicacion para la ejecucion del problema
		
	}
	Beep (555,300); //sonido del programa
	Beep (400,300); //sonido del programa
	
	 cout <<"El resultado es: " <<fact ; //impresion de resultado
	 
	
	return 0; //no retorna ningun valor
	
}
