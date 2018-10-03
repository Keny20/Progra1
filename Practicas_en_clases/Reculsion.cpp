//Programa hecho por>
//CT18009 / Chavez Torres, Keny Lisbeth
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones

using namespace std;

int factorial (int n){
	
	//declaramos una funcion para el factorial de un numero
	//si el numero es menor a cero, no retorna ningun valor
	if (n<0)
	return 0;
	//si el numero es mayor a cero, se multiplica por el factorial y se resta 1
	else if (n>1)
	return n*factorial (n-1);
	return 1; //retorna un valor
}


int main (){
	//utilizacion de la funcion
	cout << factorial(3) <<endl; //mostrar el factorial
	system ("pause") ; //pausa
}
