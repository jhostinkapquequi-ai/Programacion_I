// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generarale (int max, int min);

void llenarmatrix(int Matrix[4][7]);

void mostrarmatrix(int Matrix[4][7]);

void elementomayor(int Matrix[4][7], int &mayor, int &fila, int &columna);

void elementomenor(int Matrix[4][7], int &menor, int &fila, int &columna);


int promedio(int Matrix[4][7]);


int main(){
    int N;
    int mayor=0, menor=100, fila=0, columna=0;
    srand (time(NULL));
    int Matrix[4][7];
    llenarmatrix(Matrix);
    mostrarmatrix(Matrix);
    elementomayor(Matrix, mayor, fila, columna);
    cout<<"\nla temperatura mayor es: "<<mayor<<"°C"<<endl;
    cout<<"pocision: \n"<<"semana: "<<fila+1<<"\tdia: "<<columna+1<<endl;
    
    elementomenor(Matrix, menor, fila, columna);
    cout<<"\nla temperatura menor es: "<<menor<<"°C"<<endl;
    cout<<"pocision: \n"<<"semana: "<<fila+1<<"\tdia: "<<columna+1<<endl;
    
    cout<<"\nel promedio de temperaturas es: "<<promedio(Matrix);


}

int generarale (int max, int min)
{
    return (rand()%(max-min+1)+min);
}

void llenarmatrix(int Matrix[4][7]){
    for (int i =0; i<4; i++){
        for (int j =0; j<7; j++){
            Matrix[i][j] = generarale (35, 5);
        }
    }
}

void mostrarmatrix(int Matrix[4][7])
{
    for (int i =0; i<4; i++){
        for (int j =0; j<7; j++){
            cout << Matrix[i][j]<<"°C  ";
        }
        cout << endl;
    }
}

void elementomayor(int Matrix[4][7], int &mayor, int &fila, int &columna){
    for (int i =0; i<4; i++){
        for (int j =0; j<7; j++){
            if (Matrix[i][j]>mayor){
                mayor = Matrix[i][j];
                fila=i;
                columna=j;
            }
        }
    }
}

void elementomenor(int Matrix[4][7], int &menor, int &fila, int &columna){
    
    for (int i =0; i<4; i++){
        for (int j =0; j<7; j++){
            if (Matrix[i][j]<menor){
                menor = Matrix[i][j];
                fila=i;
                columna=j;
            }
        }
    }
}


int promedio(int Matrix[4][7]){
    int prom=0;
    for (int i =0; i<4; i++){
        for (int j =0; j<7; j++){
            prom += Matrix [i][j];
        }
    }
    return (prom/(28));
}
