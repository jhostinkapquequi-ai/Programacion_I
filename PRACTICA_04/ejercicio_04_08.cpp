// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int digitos(int n);

int main()
{
    int n;
    cout<<"programa que calcula la cantidad de digitos"<<endl;
    do{
        cout<<"ingrese un numero entero positivo :"<<endl;
        cin>>n;
    }while(n<=0);
    cout<<"la cantidad de digitos es: "<<digitos(n);
}

int digitos(int n)
{   
    int dig=0;
    while (n>0){
        n/=10;
        dig++;
    }
    return (dig);
}