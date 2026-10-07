// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void llenarvector (vector <string>&vec, int i);

int aleatorio (int max, int min);

void mostrar(vector <string> nombres, vector<string> apellidos, vector<string> edades);

int main() {
    int N;
    vector <string> nombres(10);
    vector <string> apellidos(10);
    vector <string> edades(10);
    srand (time (0));
    cout << "ingrese nombre, apellido y edad 10 veces " << endl;
    for (int i=0; i<10; i++){
        cout << "ingrese el °"<<i+1<< " nombre"<<endl;
        llenarvector (nombres, i);
        cout << "ingrese el °"<<i+1<< " apellido"<<endl;
        llenarvector (apellidos, i);
        cout << "ingrese la °"<<i+1<< " edad"<<endl;
        llenarvector (edades, i);
    }
    
    cout << "ingrese la cantidad de veces para mostrar 1 nombre, 1 apellido y una edad al azar y desplegar en pantalla"<<endl;
    cin >> N;
    cin.ignore();
    for (int i=1; i<=N; i++){
        mostrar(nombres, apellidos, edades);
    }
}

void llenarvector (vector <string> &vec, int i){
    cin >> vec[i];
}

int aleatorio (int max, int min){
    return (rand()%(max-min+1)+min);
}

void mostrar(vector <string> nombres, vector<string> apellidos, vector<string> edades){
    cout <<"nombre: "<< nombres[aleatorio (9,0)]<<endl;
    cout <<"apellido: "<< apellidos[aleatorio (9,0)]<<endl;
    cout <<"edad: "<< edades[aleatorio (9,0)]<<endl;
}