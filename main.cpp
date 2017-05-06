#include <iostream>
using namespace std;

char** crearMatriz(int);
void printMatriz(int, char**);

int main(){
	char** matriz;
	int filas = 6;
	int col = 7;
	printMatriz(filas, col, matriz);
	return 0;
}

void Initialize(char matriz[filas][columnas]){ 
    // Sets up Game Board
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            matriz[i][j] = EMPTY;
}








/*char** crearMatriz(int n){
	char** retVal = new char*[n];
	for (int i = 0; i <= n; i++){
		retVal[i] = new char[n];
	}
	return retVal;
}

void printMatriz(int filas, int col, char** matriz){
	for (int i = 0; i <= filas; i++){
		for (int j = 0; j <= col; j++){
			matriz[i][j] = "|";
		}
		cout << endl;
	}
}*/
