// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int areatriangulo(int base, int altura);

int main()
{
    int b, h,area;
    cout<<"Programa para calcular el area de un triangulo"<<endl;
    cout<<"ingrese la base del triangulo"<<endl;
    cin>>b;
    cout<<"ingrese la altura del triangulo"<<endl;
    cin >>h;
    area =areatriangulo(b,h);
    cout<<"el area del triangulo es: "<<area;
    return 0;
}

int areatriangulo(int base, int altura)
{
    return ((base*altura)/2);
}