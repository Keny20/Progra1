//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <math.h> //Para las operaciones matematicas
#include <windows.h> //para lograr reproducir el sonido

using namespace std; //obligatoria

//inicio
int main(int argc, char** argv) {
	
	system("color 71"); //Asisgnar color a la consola "7" fondo de consola y "1" color de letra
	
	Beep (542,400); //Sonido del programa
	
	//declaracion de variables
	float notas [5]; //Ingreso de notas
	float suma=0 ; //sumatoria de notas
	float promedio ;//sacar promedio
	
	
	for (int i=0 ; i<=4 ; i++) { //ciclo para ingreso de notas 
				
do {
	cout <<"ingrese la nota " <<i+1 << endl ; //ingreso de notas desde la nota 1
		cin >>notas [i]; //lectura de variable
		suma=suma+notas[i]; //sumatoria de las notas ingresadas
		
} while (notas [i]<0 || notas [i]>10 ); //si la nota ingresada es menor a cero se pedira el ingreso de una nueva nota
		
}
	//despues de ser ingresadas las notas estas seran leidas individualmente
	cout <<"Las notas son :" <<endl ; 
	for (int i=0 ; i<=4 ; i++) //for para lectura de notas
	cout <<"N "<<i+1 <<"= "<< notas [i] <<endl;
	promedio=suma/5;//promedio de las notas
	cout<<"El promedio es de: "<<promedio<<endl ; //impresion del pomedio
	 Beep (995,450); //Sonido del programa
	system("pause"); //pausa
	
	return 0; //no retorna ningun valor
}
