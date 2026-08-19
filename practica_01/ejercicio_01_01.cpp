// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 19/08/2026

#include <iostream>
using namespace std;

int main() {
    int anio;
    
    cout<<"Ingrese un año: ";
    cin>>anio;
    
    if (anio>0)
    {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            cout << anio << " es un año bisiesto." << endl;
        } 
        else {
            cout << anio << " NO es un año bisiesto." << endl;
        }
    }
    else{
        cout<<"No existen anios en negativo, ERROR";
    }

    return 0;
}