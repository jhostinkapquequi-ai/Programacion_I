// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int distancia(int v, int t);

int main()
{
    int V,T;
    cout<<"porgrama que calcula la distancia: "<<endl;
    cout<<"ingrese la velocidad constante "<<endl;
    cin>>V;
    cout<<"ingrese el tiempo: "<<endl;
    cin>>T;
    cout<<"la distancia recorrida es: "<<distancia(V,T);
    return 0;
}

int distancia(int v,int t)
{   
    return (v*t);
}