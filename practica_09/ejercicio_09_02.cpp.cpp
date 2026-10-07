// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generarale (int max, int min);

void llenarmatrix(int N, int Matrix[100][100]);

void mostrarmatrix(int N, int Matrix[100][100]);

int sumaultimacolumna(int N, int Matrix[100][100]);

int productoultimacolumna(int N, int Matrix[100][100]);

void elementomayor(int N, int Matrix[100][100], int &mayor, int &fila, int &columna);

int promedio(int N, int Matrix[100][100]);


int main(){
    int N;
    int mayor=0, fila=0, columna=0;
    srand (time(NULL));
    cout << "ingrese el tamaño NxN de la matriz"<<endl;
    cin >> N;
    int Matrix[100][100];
    llenarmatrix(N, Matrix);
    mostrarmatrix(N, Matrix);
    cout<<"\nla suma de la ultima columna: "<<sumaultimacolumna(N, Matrix)<<endl;
    cout<<"\nproducto de la ultima columna: "<<productoultimacolumna(N, Matrix)<<endl;
    elementomayor(N, Matrix, mayor, fila, columna);
    cout<<"\nel elemento mayor es: "<<mayor<<endl;
    cout<<"pocision: \n"<<"fila: "<<fila+1<<"\tcolumna: "<<columna+1<<endl;
    cout<<"\nel promedio de la matriz es: "<<promedio(N, Matrix);


}

int generarale (int max, int min)
{
    return (rand()%(max-min+1)+min);
}

void llenarmatrix(int N, int Matrix[100][100]){
    int A, B;
    cout << "ingrese el min de los elementos" << endl;
    cin >> B;
    cout << "ingrese el maximo de los elementos" << endl;
    cin >> A;  
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            Matrix[i][j] = generarale (A, B);
        }
    }
}

void mostrarmatrix(int N, int Matrix[100][100])
{
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            cout << Matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

int sumaultimacolumna(int N, int Matrix[100][100]){
    int suma=0;
    for (int j=0; j<N; j++){
        suma += Matrix[N-1][j];
    }
    return suma;
}

int productoultimacolumna(int N, int Matrix[100][100]){
    int producto=1;
    for (int j=0; j<N; j++){
        producto *= Matrix[N-1][j];
    }
    return producto;
}

void elementomayor(int N, int Matrix[100][100], int &mayor, int &fila, int &columna){
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            if (Matrix[i][j]>mayor){
                mayor = Matrix[i][j];
                fila=i;
                columna=j;
            }
        }
    }
}

int promedio(int N, int Matrix[100][100]){
    int prom=0;
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            prom += Matrix [i][j];
        }
    }
    return (prom/(N*N));
}
