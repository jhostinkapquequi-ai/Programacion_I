// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

float conversiondivisa(int bs);

int main()
{
    int bs;
    cout<<"ingrese la cantidad de bolivianos"<<endl;
    cin >>bs;
    cout<<"la cantidad en dolares equivale a: "<<conversiondivisa(bs)<<"$";
    return 0;
}

float conversiondivisa(int bs)
{   
    return (bs*0.0847);
}