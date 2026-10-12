// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void llenarmatrix(int n, int Matrix[100][100]);

void mostrarmatrix(int n, int Matrix[100][100]);

int main(){
    int n;

    cout << "ingrese el tamaño nxn de la matriz"<<endl;
    cin >> n;
    int Matrix[100][100];
    llenarmatrix(n, Matrix);
    cout << "\tMatriz: "<<endl;
    mostrarmatrix(n, Matrix);

}

void llenarmatrix(int n, int Matrix[100][100]){
    int e=1;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Matrix[i][j]=e;
            e++;
        }
        e-=3;
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


