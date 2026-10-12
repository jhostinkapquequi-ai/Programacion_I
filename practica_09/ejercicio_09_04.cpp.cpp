// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int generarale (int max, int min);

void llenarmatrix(int N,int M, int Matrix[100][100]);

void mostrarmatrix(int N,int M, int Matrix[100][100]);

void encontrarPuntoDeSilla(int N, int M, int matrix[100][100], vector <int> vecP);



int main(){
    int N, M;
    srand (time(NULL));
    cout << "ingrese las filas de la matriz"<<endl;
    cin >> N;
    cout << "ingrese las columnas de la matriz"<<endl;
    cin >> M;
    int Matrix[100][100];
    vector <int> vecP;
    llenarmatrix(N,M, Matrix);
    mostrarmatrix(N,M, Matrix);
    encontrarPuntoDeSilla(N, M, Matrix, vecP);

}

int generarale (int max, int min)
{
    return (rand()%(max-min+1)+min);
}

void llenarmatrix(int N,int M, int Matrix[100][100]){
    for (int i =0; i<M; i++){
        for (int j =0; j<N; j++){
            Matrix[i][j] = generarale (10, 1);
        }
    }
}

void mostrarmatrix(int N, int M, int Matrix[100][100])
{
    for (int i =0; i<N; i++){
        for (int j =0; j<M; j++){
            cout << Matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

void encontrarPuntoDeSilla(int N, int M, int matrix[100][100], vector <int> vecP){
    int filas = N;
    int columnas = M;
    bool encontrado = false;

    for (int i = 0; i < filas; i++) {
        // Encontrar el elemento máximo de la fila i
        int colMax = 0;
        for (int j = 1; j < columnas; j++) {
            if (matrix[i][j] > matrix[i][colMax]) {
                colMax = j;
            }
        }

        // Verificar si ese mismo elemento es el mínimo en su columna
        int candidato = matrix[i][colMax];
        bool esMinimoColumna = true;
        for (int k = 0; k < filas; k++) {
            if (matrix[k][colMax] < candidato) {
                esMinimoColumna = false;
                break;
            }
        }

        if (esMinimoColumna) {
            cout << "Punto de silla encontrado: " << candidato 
                  << " en la posición (" << i << ", " << colMax << ")\n";
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "La matriz no tiene puntos de silla.\n";
    }
}
