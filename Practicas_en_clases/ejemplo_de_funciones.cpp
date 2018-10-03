//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <math.h> //libreria para calculos matematicos
#include <windows.h> //libreria para poder reproducir el sonido

using namespace std;

float sumar(float x, float y); //variable de tipo flotante

//declaracion de funcion
void pedirNumero(); 

float sumar(float x, float y)//funcion
{
	return x+y;//retorna el total de la suma 
}

void pedirNumero (){
	system ("color 5e") ; //color
	Beep (900,500); //sonido del programa
	float x ; //declaracion de variable para el primer numero
	float y;//declaracion de variable para el segundo numero
	float total ;  //declaracion de variable para impresion de datos
	
		Beep (400,350); //sonido del programa
	cout << "Ingrese un numero"<<endl ; //ingreso del primer numero
	cin >>x;//lectura de variable
	Beep (400,350); //sonido del programa
	cout << "Ingrese un numero"<<endl ;//ingreso del segundo numero
	cin >>y; //lectura de variable
	
	total = sumar (x,y); //ejecucion de la suma
	
	cout << "El resultado es "<<total<<endl ; //impresion de datos
	
}



int main (){
	pedirNumero (); //llamada de funcion
	system ("pause"); //pausa
	return 0; //no retorna ningun valor
}
