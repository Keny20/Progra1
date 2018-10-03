//Programa hecho por 
//CT18009 / Chavez Torres, Keny Lisbeth
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
//variables globales
char tabla [3][3];//para la matriz del juego
char jugador = 'X'; //tipo de jugador
//funciones
void inicio (); //inicio del juego
void mostrarTabla ();//mostrar la tabla del juego
bool ganador () ;//cuando gana
bool empate () ; //hay empate
 

int main (){
	Beep (1000,999);
	inicio ();//llamada de funcion
	while (!ganador () && !empate()) { //se hace el proceso hasta que hay un empate o ganador
		mostrarTabla (); //llamada de funcion
		int fila = 0; //declaracion de variable para la posicion de fila
		int col = 0 ;//declaracion de variable para la posicion de columna
		
		cout <<endl<<"\tSeleccione la fila en que quiere jugar "<<jugador <<"="	;//seleccion de fila
		cin >> fila ;//lectura de variable
		cout <<endl<<"\tSeleccione la columna en que quiere jugar "<<jugador <<"="	; //seleccion de columna
		cin >> col ; //lectura de variable	
		
		//condicion para cuando el usuario intente ingresar en un puesto ya ocupado
		if (tabla [fila][col]!='_'){
			cout <<"ERROR, intente nuevamente" <<endl ;
		}
		//sino continua el juego
		else {
			tabla [fila][col] = jugador ;
			if (jugador == 'X'){
				jugador = 'O';//jugador que ontiene 0
			}
			else {
				jugador = 'X'; //jugador que ontiene x
			}
		}
	} 
	cout <<endl ;
	mostrarTabla (); //llamada de funcion
	cout <<endl;
	system ("pause"); //pausa, para el fin o continuacion de juego
}
	
//declaracion para funcion inicio
//como la tabla o matriz estara ejecutada
	void inicio (){
		for (int i=0 ; i<3 ; i++) { 
			for (int j=0 ; j<3 ; j++) {
			tabla [i][j]='_';
		}
	}
}
	//declaracion para funcion mostrar
	//se mostrara la tabla y en que posiciones va ingresando el usuario
	void mostrarTabla (){
		for (int i=0 ; i<3 ; i++) {
			for (int j=0 ; j<3 ; j++) {
			cout <<"\t" <<tabla [i][j];
		}
		cout <<endl;
	}
}	
//declaracion para funciones de que forma y posiciones se puede ganar el juego
	bool ganador (){
		//en posicion horizontal
		//si cumple con esta posicion uno de los dos jugadores gana
		char jugadorLocalizado = tabla [0][0];
		for (int i=0 ; i<3 ; i++) {
			for (int j=0 ; j<3 ; j++){
				if (tabla [i][j] == '_' ) {
					break ; break ; //rompe las condiciones anteriores
				}
				if (jugadorLocalizado != tabla [i][j] ) {
					break; break ; //rompe las condiciones anteriores
				}
				jugadorLocalizado = tabla [i][j] ;
				if (j == 2) {
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ;
				}
			}
		}
		//en posicion vertical
		//si cumple con esta posicion uno de los dos jugadores gana
	jugadorLocalizado = tabla [0][0] ;
		for (int i=0 ; i<3 ; i++) {
			for (int j=0 ; j<3 ; j++) {
			
			if (tabla [j][i] == '_') {
				break; break;  //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != tabla [j][i] ){
				break; break;  //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = tabla [j][i] ;
			if (j==2){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ;//retorna un valor verdadero
			}
		}
	}
	//en posicion de izquierda a derecha o sea cruzada
	//si cumple con esta posicion uno de los dos jugadores gana
		jugadorLocalizado = tabla [0][0] ;
		for (int i=0 ; i<3 ; i++) {
			if (tabla [i][i] == '_') {
				break;  //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != tabla [i][i] ){
				break;  //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = tabla [i][i] ;
			if (i==2){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ; //retorna un valor verdadero
			}
		}
		///en posicion de derecha a izquierda o sea cruzada
		//si cumple con esta posicion uno de los dos jugadores gana
		jugadorLocalizado = tabla [0][2] ;
		for (int i=2 ; i>=0 ; i--) {
			if (tabla [2-i][i] == '_') {
				break; //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != tabla [2-i][i] ){
				break; //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = tabla [2-i][i] ;
			if (i==0){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ; //retorna un valor verdadero
		}
	}
	return false ; //retorna un valor falso si lo anterior no se cumple
}
//declaracion de funcion si hay empate
bool empate (){
	for (int i=0 ; i<3 ; i++) {
			for (int j=0 ; j<3 ; j++){
				if (tabla [i][j]=='_'){
					return false ;//sera un valor falso por no ganar
				}
			}
				
		}
		cout <<"\tEMPATE !!"<<endl ;
		return true ;////retorna un valor verdadero
}

	
	
	
	
	

