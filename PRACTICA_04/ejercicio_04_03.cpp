// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

float volumencilindro(int volumen, int altura);

int main()
{
    int r, h;
    cout<<"Programa para calcular el volumen de un cilindro"<<endl;
    cout<<"ingrese el radio del cilindro"<<endl;
    cin>>r;
    cout<<"ingrese la altura del ciclindro"<<endl;
    cin >>h;
    cout<<"el volumen del cilindro es: "<<volumencilindro(r,h);
    return 0;
}

float volumencilindro(int radio, int altura)
{   
    float pi=3.14;
    
    return (pi * radio * radio * altura);
}