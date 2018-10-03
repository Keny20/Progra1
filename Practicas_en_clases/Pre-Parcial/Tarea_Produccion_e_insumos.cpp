//Programa hecho por 
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <windows.h> //Esta libreria nos permite, acceder a un sonido y a colores a nuestra consola
#include <math.h> //calculos matematicos
#include <stdlib.h> //para la declaracion de borrar en pantalla

using namespace std; //obligatoria

void b(); //declaracion de funcion no retorna/no resibe ningun valor*/

int main (){
	//incio
		system("color 4b"); //color de pantalla
	char salir; //salir del programa
	int soda ; //calculo para la soda
	int jugo ; //calculo para el jugo
	int calculo ; //variable para calcular proceso
	int calcProducto ; //saber cual de los 2 productos de quiere calcular
	
	//ciclo repetitivo para todo el programa
	do {
	Beep (1000,600); //sonio
	//ciclo repetitivo para el peque?o menu
	do {
		 b();//llamada de funcion
		 
		cout <<"Ingrese el tipo de bebida que desea calcular"<<endl; //saber el tipo de bebida
	cout <<"1-Soda \n2-Jugo"<<endl; //opciones Soda vale 1 y Jugo vale 2
	cin>> calcProducto; //lectura de variable
	Beep (854,444);//sonio
	} while (calcProducto<1 || calcProducto>2); //repetir hasta que se cumpla 
	
	Beep (444,544); //sonio
	system("color 7c"); //color de pantalla
	//calculo para soda si la opcion es 1
	if (calcProducto == 1) {
		Beep(555,444); //sonio
		Beep (200,100); //sonio
		
		cout <<endl<<"SODA"<<endl; //eligio soda
		b(); //llamada de funcion
		cout <<"Ingrese la cantidad del producto"<<endl; //cantidad del producto
		cin >> soda ; //lecuta
		
		Beep (444,544); //sonio
		 b();//llamada de funcion
		 cout <<"Cantidad: "<<soda<<endl; //cantidad ingresada
		calculo = soda * 500;//calculo para la cantidad de agua
		cout <<"la cantidad de agua para la soda es: "<<calculo<<"ml"<<endl; //impresion del calculo
		calculo = soda * 800; //calculo para la cantidad de azucar
		cout <<"la cantidad de azucar para la soda es: "<<calculo<<"g"<<endl;//impresion del calculo
	 
		system("pause");//pausa
		
	}
	
	//calculo para el jugo si la opcion es 2
	else if (calcProducto == 2){
		 system("color 7d"); //color de pantalla
		Beep(555,444); //sonio
		Beep (200,100); //sonio
			cout <<endl<<"JUGO"<<endl; //eligio jugo
			b();//llamada de func
		cout <<"Ingrese la cantidad del producto"<<endl;
		cin >> jugo ; //lectura de variable
		Beep (444,544); //sonido
		b();//llamada de funcion
		 cout <<"Cantidad: "<<jugo<<endl; //cantidad ingresada
		calculo = jugo * 600; //calculo para cantidad de agua
		cout <<"la cantidad de agua para la soda es: "<<calculo<<"ml"<<endl; //impresion del calculo
		calculo = jugo * 700;//calculo para cantidad de azucar
		cout <<"la cantidad de azucar para la soda es: "<<calculo<<"g"<<endl; //impresion del calculo
		 
		system("pause"); //pausa
	}
	Beep (2000,1020); //sonido
	cout <<"//*PRESIONE CUALQUIER TECLA PARA SALIR, SINO PRESIONE a"<<endl; //salir o hacer otro calculo
		cin>>salir; //lectura de variable
		
		}while (salir=='a'); //si se cumple continua, sino sale	
					
	b();//llamada de funcion
	Beep (1000,600); //sonido
		cout <<"Gracias por su visita!"<<endl; //si desea salir
		system ("pause"); //pausa
	b() ; //llamada de funcion
//mensajes al final.. 
system("color 4b"); //color de pantalla
	cout <<"Desarrollado por Keny Chavez" <<endl;//fue creado por
	cout <<"N° Carnet: CT18009" <<endl;//numero de carnet
	cout <<"Universidad de El Salvador" <<endl<<endl; //universidad
	system ("pause"); //pausa
	b();//llamada de funcion
	
	return 0;
	
}

		
	

void b(){//declaracion de lo que ejecutara la funcion declarada anteriormente
	system ("cls"); //borrar datos en pantalla cuand se utiliza
	cout <<"****************************"<<endl; //decoracion
	cout <<"PRODUCCION BEBIDAS!!"<<endl; //decoracion
	cout <<"****************************"<<endl<<endl; //decoracion
	
}
	
