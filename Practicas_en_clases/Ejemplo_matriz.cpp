//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth

#include <iostream> //Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones



using namespace std;

int main (){
	//declaracion de variables
	int mat[5][5] ;//matriz 1
	int mat2 [5][5];//matriz 2
	int mat3 [5][5]; //matriz 3
	for (int fila=0 ; fila<5 ; fila++) {//ciclo para la fila, igual a cero, menores que 5 e incrementa un valor
		
		for (int col=0 ; col<5; col++){ //ciclo para la columna, igual a cero, menores que 5 e incrementa un valor
		
			mat [fila][col] = 0;	
			mat2 [fila][col]  =1;
			
			/*condicion si la variable fila es igual a 4 y la variable columna es igual  2, 
			sus valores seran en cero*/
			if (fila==4||col==2) {
				mat2 [fila][col]  =0;
					mat2 [fila][col]  =0;	
				
			}
			//sino en uno
			else {
					mat2 [fila][col]  =1;
			}
			/*mat2 [fila][2]  =0;
			mat2 [4][col]  =0;*/
			mat3[fila][col]= mat [fila][col]+mat2 [fila][col]; //sumatoria del proceso de la matriz uno y dos
					
		}
			
	}
		for (int fila=0 ; fila<5 ; fila++) {
		
		for (int col=0 ; col<5; col++){
			cout << mat3[fila][col]<<"\t"; //impresion de datos
					
		}
		cout<<endl;	
	}
	return 0; //no retorna ningun valor
	
}
