//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <stdlib.h>//control de procesos
#include <time.h>//manipulacion de hora y fecha del sistema


using namespace std;

//inicio
int main (){
	//utilizacion de el random
	srand (time (NULL)); //el tiempo sera de tipo nulo

	//cout <<rand () % 100+1;
	
	int matriz [3][3]; //declaracion de variables para la matriz
	
	for (int i=0 ; i<3 ; i++){ //ciclo en fila
		for (int j=0 ; j<3 ; j++){ //ciclo en columna
		
		
		matriz [i][j] = rand () % 101; //la matriz tomara valores del random de 1 a 101
		
		}	
	}
	//mostracion de la matriz
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			cout << matriz [i][j] <<" ";
		}
		cout << endl;
	}
	return 0;	 //no retorna ningun valor
}
