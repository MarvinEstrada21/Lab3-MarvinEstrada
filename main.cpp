#include <iostream>int main ()

using namespace std;

//char** crearMatriz(int);
//void printMatriz(int, char**);
void Initialize(char);
void PrintBoard(const char);

/*int main(){
	char** matriz;
	int filas = 6;
	int col = 7;
	printMatriz(filas, col, matriz);
	return 0;
}*/

int main (){
	int filas = 6, columnas = 7;
	char GameBoard[filas][columnas]; // Array for tracking the game

	Initialize(GameBoard);

	PrintBoard(GameBoard);
    
    return 0;
}

void Initialize(char matriz[filas][columnas]){ 
    // Sets up Game Board
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            matriz[i][j] = EMPTY;
}

void PrintBoard (const char GameBoard[filas][columnas]){
    cout << "  0   1   2   3   4   5 " << endl;
    cout << "|-----------------------|" << endl;
    for (int i = 0; i < filas; i++){
        cout << "| ";
        for (int j = 0; j < columnas; j++){
               cout << GameBoard[i][j];
            cout << " | ";
        }
        cout << endl << "|-----------------------|" << endl;
    }
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
