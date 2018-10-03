//Programa hecho por
//CT18009 .. Chavez Torres, Keny Lisbeth
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones

using namespace std;
//incio 

int main (){
	system ("color 72"); //color
	//este sistema es para determinar que valor estara en cada matriz
	int a[5][2] = {{0,0}, //la mtriz contendra 5 filas y dos columnas
					{1,2},
					{2,4}}; 
	
		for (int i=0; i<5; i++) //ciclos, que iran de cero a menores que 5, incrementando uno (para las filas)
		{
		for (int j=0; j<2; j++)	 //ciclos, que iran de cero a menores que 2, incrementando uno (para las columna)
		{
			cout <<"a["<<i<<"]["<<j<<"]"; //impresion de matriz
			cout <<a[i][j]<<endl;////impresion de matriz
		}
		}
	
	
	
	return 0; //no retorna ningun valor
}
