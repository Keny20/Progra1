//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <windows.h> //Esta libreria nos permite, acceder a un sonido y a colores a nuestra consola
#include <math.h> //calculos matematicos
#include <stdlib.h> //para la declaracion de borrar en pantalla

using namespace std ; //obligatoria
void c();
//inicio
int main() {
	//declaracion de variables 
	
	system("color 71"); //Asisgnar color a la consola "7" fondo de consola y "1" color de letra
	
	Beep (542,400); //Sonido del programa
	
	
	int totalVentas ; //variable para el ingreso del total de ventas
	int salario; //variable para definir el suedo cuando la venta es mayor a 4000000
	
	//saludo
	c ();//llamada de funcion
		cout << "BIENVENID@S" << endl << endl ;
		
		//ciclo repetitivo, cuando la venta ingresada sea igual o menor a cero
		do 
		{ 
			
				cout << "Ingrese el total de las ventas: " << endl ; //ingreo de total de venta
	cin >> totalVentas  ; //lectura de variable
		Beep (542,400); //Sonido del programa
		c (); //llamada de funcion
	
		} while (totalVentas <= 0) ; //se seguira pidiendo el dato hasta que este sea mayor a cero
		 
		//inicio de proceso
		//se utiliza la condicion "if" para definir cada cantidad de venta y segun la cantidad el salario
		//obteniendo un salario diferente por cada cantidad de venta
			if (totalVentas > 0 && totalVentas <= 500000) {
		
		cout << endl << "El salario del empleado es $8000 " << endl ;
		system ("pause"); //pausa
		
	}
	else if (totalVentas >= 500001 && totalVentas <= 1000000 ) {
		
		cout << endl << "El salario del empleado es $16000 " << endl ;
		system ("pause"); //pausa
	}
	
	else if (totalVentas >= 1000001 && totalVentas <= 1500000 ) {
		
		cout << endl << "El salario del empleado es $32000 " << endl ;
		system ("pause"); //pausa
	
	}
	
	else if (totalVentas >= 1500001 && totalVentas <= 2500000 ) {
		
		cout << endl << "El salario del empleado es $45000 " << endl ;
		system ("pause"); //pausa
	}
	
	else if (totalVentas >= 2500001 && totalVentas <= 4000000 ) {
		
		cout << endl << "El salario del empleado es $55000 " << endl ;
		system ("pause"); //pausa
	}
	
	else if (totalVentas > 4000000 ) {
		
		//proceso para definir salario cuando es mayor a 4000000
		salario = totalVentas * 0.20 ;	
		
		cout << endl << "El salario del empleado es $" <<salario ;
		system ("pause"); //pausa
	}
			Beep (542,400); //Sonido del programa
			c() ; //llamada de funcion
		cout <<"Desarrollado por Keny Chavez" <<endl;//fue creado por
	cout <<"N° Carnet: CT18009" <<endl;//numero de carnet
	cout <<"Universidad de El Salvador" <<endl<<endl; //universidad
	system ("pause"); //pausa
	c();//llamada de funcion
		return 0 ;//no retorna ningun valor
}
void c(){
	system("cls");//borrar datos en pantalla una vez utilizados
	cout <<"****EMPRESARIAL S.A.D.C.V****"<<endl<<endl; //decoracion
}
