// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 19/08/2026


#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    double altura;
    
    cout<<"Ingrese la edad: ";
    cin>>edad;
    
    cout<<"Ingrese el sexo (M/F): ";
    cin>>sexo;
    
    cout<<"Ingrese la altura (en metros): ";
    cin>>altura;
    
    cout<<"\nDatos ingresados:"<<endl;
    cout<<"Edad: "<< edad<<" años"<<endl;
    cout<<"Sexo: "<< sexo<<endl;
    cout<<"Altura: "<< altura<<" metros"<<endl;
    
    return 0;
}