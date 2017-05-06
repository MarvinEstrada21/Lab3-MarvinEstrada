#include <iostream>

using namespace std;

void locations(int &, int &);

void tables(char [][7], int);

int main(){
	const int filas = 6;
	const int columnas = 7;
	char table[filas][columnas] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int rows, columns;
	tables(table, filas);
	cout << "\n Jugador 1 es X\n Jugador 2 es O" << endl;

	for(int count = 0; count < 42; count++){
		cout << "\n Jugador 1" << endl;
		locations(rows, columns);
		table[rows][columns] = 'X';
		tables(table, filas);
		cout << "\n Jugador 2" << endl;
		locations(rows, columns);
		table[rows][columns] = 'O';
		tables(table, filas);
	}
	//system("PAUSE");
	return 0;
}

void locations(int &row, int &column){
	cout << " Ingrese una fila: ";
	cin >> row;
	while(row < 0 || row > 5){
		cout << "\n Debe ingresar de 0 a 5\n";
		cout << " Ingrese una fila: ";
		cin >> row;
	}
	cout << " Ingrese una columna: ";
	cin >> column;
	while(column < 0 || column > 6){
		cout << "\n Debe ingresar de 0 a 6\n";
		cout << " Ingrese una columna: ";
		cin >> column;
	}
}

void tables(char table[][7], int filas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j <= 7; j++){
			cout <<  table[i][j] << "|   ";
		}
		cout << endl;
		cout << " ------------------------------------ " << endl;
	}
}



