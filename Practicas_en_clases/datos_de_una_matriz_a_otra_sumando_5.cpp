//Programa hecho por 
//CT18009 / Chavez Torres, Keny Lisbeth
//03-10-2018
#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <conio.h>//para darle mejor presentación a nuestros programas.

using namespace std;

int main ()
	{	
	//declaramos variables
	int fill;//filas
	int col;//columnas
	int matriz [30][30] ; //matriz
	
	cout <<"Ingrese el numero de filas: " ; //ingresar numero de filaas
	cin >> fill; //lectura de variable
	cout <<"Ingrese el numero de columnas: " ; //ingresar numero de columnas
	cin >> col; //lectura de variable
	
	int matrizB [fill][col];//variable para la segunda matriz
	
	//ciclos
	for(int i=0; i<fill; i++) { //para filas
		for(int j=0; j<col; j++){//para columnas 
			cout <<"Ingrese dato ["<<i<<"]["<<j<<"] : ";//orden de matriz
			cin >>matriz[i][j]; //lectura de variable
			
		}
	}
	//impresion de matriz
			for(int i=0; i<fill; i++){
				for(int j=0; j<col; j++){
					cout <<matriz[i][j]<<" ";
					
				}
				cout <<endl;
			}
			//declarando segunda matriz
			cout <<"\nMatriz B\n";
			//paso de datos de una matriz a otra
			
			for(int i=0; i<fill; i++)
		{
				for(int j=0; j<col; j++)
			{
					matrizB[i][j]=matriz[i][j]+5; //en la matriz B se guardan los datos de la A con la sumatoria de 5
					
				}
			
			}
			//impresion de matriz
				for(int i=0; i<fill; i++)
		{
				for(int j=0; j<col; j++)
			{
				cout <<matrizB[i][j]<<" ";
					
				}
			cout<<endl;
			}
				
	
	
	
	return 0;

}
