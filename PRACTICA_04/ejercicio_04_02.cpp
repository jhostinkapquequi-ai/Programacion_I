// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int numeromayor(int a, int b, int c);

int main()
{
    int a, b, c;
    cout<<"programa que calcula el mayor de tres numeros"<<endl;
    cout<<"ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"ingrese el segundo numero :"<<endl;
    cin>>b;
    cout<<"ingrese el tercer numero: "<<endl;
    cin>>c;
    cout<<"el nuemro mayor es: "<<numeromayor(a,b,c);
}

int numeromayor(int a, int b, int c)
{
    if (a>b && a>c){
        return a;
    }
    else if (b>a && b>c){
        return b;
    }
    else if (c>a && c>b){
        return c;
    }
}