// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void llenarmatrix(int n, int Matrix[100][100]);

void mostrarmatrix(int n, int Matrix[100][100]);

void cambiarfilas(int n, int Matrix[100][100], int Matrix2[100][100]);


int main(){
    int n;

    cout << "ingrese el tamaño nxn de la matriz"<<endl;
    cin >> n;
    int Matrix[100][100];
    int Matrix2[100][100];
    llenarmatrix(n, Matrix);
    cout << "\tMatriz inicial: "<<endl;
    mostrarmatrix(n, Matrix);
    cambiarfilas(n, Matrix, Matrix2);
    cout << "\n\tMatriz inicial: "<<endl;
    mostrarmatrix(n, Matrix2);

}

void llenarmatrix(int n, int Matrix[100][100]){
    
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "elemento posicion ["<<i+1<<"]["<<j+1<<"]"<<endl;
            cin >> Matrix[i][j];
        }
    }
}

void mostrarmatrix(int n, int Matrix[100][100]){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << Matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void cambiarfilas(int n, int Matrix[100][100], int Matrix2[100][100]){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==0){
                Matrix2[0][j]= Matrix[n-1][j];
            }
            else if (i==n-1){
                Matrix2[n-1][j]= Matrix[0][j];
            }
            else{
                Matrix2[i][j]= Matrix[i][j];

            }
        }
    }
}



