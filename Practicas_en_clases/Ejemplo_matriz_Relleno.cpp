//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
using namespace std;
//variables globales
int mat[5][5] ;//matriz
	int mat2 [5][5]; //matriz 1
	int mat3 [5][5]; //matriz 2
	
//declaracion de funcion
void llenarMatriz()
{
		for (int fila=0 ; fila<5 ; fila++) {//ciclo para la fila, igual a cero, menores que 5 e incrementa un valor
		
		for (int col=0 ; col<5; col++){//ciclo para la columna, igual a cero, menores que 5 e incrementa un valor
			mat [fila][col] = 0;	//valor de cero
			mat2 [fila][col]  =1; //valor de uno
			
			/*condicion si la fila es igual al valor de las columnas o las filas pares igual a cero
			y las columnas pares sean igual a cero o las filas pares sean igual a uno y las columnas pares igual a uno*/
			if (fila==col ||fila%2==0&& col%2==0|| fila%2==1&&col%2== 1) {
				
			
				mat2 [fila][col] = 0; //matriz uno igual a cero
				
			}
			else  {
						mat3 [fila][col]=1; //matriz uno igual a uno
			}
			
		}
	}
}
//declaracion de la segunda funcion
//para la impresion de la matriz 3 con los datos anteriores
		void imprimirMat()	{	
		for (int fila=0 ; fila<5 ; fila++) {
		for (int col=0 ; col<5; col++){
			cout << mat3[fila][col]<<"\t"; //impresion de datos
					
		}
		cout<<endl;	
	}
}


int main (int arg, char *argv[]){
	
	llenarMatriz (); //llamada de funcion
	imprimirMat (); //llamada de funcion
	return 0; //no retorna ningun valor
}	

