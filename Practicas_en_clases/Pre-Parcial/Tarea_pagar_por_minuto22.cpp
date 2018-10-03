//Programa hecho por 
//CT18009 / Chavez Torres, Keny Lisbeth
#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <windows.h> //Esta libreria nos permite, acceder a un sonido y a colores a nuestra consola
#include <math.h> //calculos matematicos
#include <stdlib.h> //para la declaracion de borrar en pantalla

using namespace std ; //obligatoria
 
 void a (); //declaracion de funcion no retorna/no resibe ningun valor*/
int main (){ 
//inicio
	Beep (999,450); //sonido
	system("color 71"); //color de pantalla
	//declaracion de variables
	int minutos ; //ingreso de minutos a calcular
	double totalPagar ; //aqui se hace el calculo para saber cuanto pagara
	int opcion ; //si desea o no saber su total a pagar
	
	//ciclo repetitivo
do { 

		a (); //Borrar en pantalla
	cout <<"Desea saber el total a pagar del cliente por su llamada? "<<endl; //peque?o menu 
	cout <<"No [1] \nSi [2]"<<endl; //opciones SI vale 2 y NO vale 1
	cin>> opcion ; //lectura de variable
	
	Beep (1000,540);//sonido
}while (opcion < 1 || opcion >2 );//repetir sino se cumple


	
		system("color b1"); //color de pantalla
		//condiciones
	if (opcion == 1){  //si la opcion anterior es 1
		a(); //Borrar en pantalla
		cout <<"Gracias por visitarnos!"<<endl; //aparece este mensaje, pues no quizo saber
		system("pause"); //pausa
	}
	else if (opcion ==2){ //si la opcion es 2
	
	//ciclo repetitivo
	do {
		a (); //Borrar en pantalla
		cout <<"Ingrese el total de minutos"<<endl ;//ingreso de minutos
		cin >>minutos ;//lectura de variable
		
	}while (minutos <= 0) ; //repetir sino se cumple
	
	//al cumplirse la funcion anterior
	//se validan las condiciones, dando el precio por el tiempo de llamada
	
	if (minutos >= 1 && minutos <= 10){
		totalPagar = minutos * 0.05;	
	}
	else if (minutos >= 11 && minutos <= 15 ) {
		totalPagar = minutos * 0.08 ;
	}
	else if (minutos > 15){
		totalPagar = minutos * 0.10;
	}
	Beep (1000,600);//sonido
	a (); //llamada de funcion
	cout <<"El total a pagar es: $"<<totalPagar<<endl<<endl; //impresion de resultado
		system ("pause");
	
}
system("color 71"); //color de pantalla
Beep (444,544); //sonido
a() ; //llamada de funcion
//mensajes al final.. 

	cout <<"Desarrollado por Keny Chavez" <<endl;//fue creado por
	cout <<"N° Carnet: CT18009" <<endl;//numero de carnet
	cout <<"Universidad de El Salvador" <<endl<<endl; //universidad
	system ("pause"); //pausa
	a(); //llamada de funcion
}
void a(){ //declaracion de lo que ejecutara la funcion declarada anteriormente
	system ("cls"); //borrar datos en pantalla una vez utilizados
	cout <<"~_~_~_~_~_~_~_~_~_~_~_~_"<<endl; //decoracion
	cout <<"	MOVISTAR"<<endl; //decoracion
	cout <<"~_~_~_~_~_~_~_~_~_~_~_~_"<<endl<<endl; //decoracion

}
