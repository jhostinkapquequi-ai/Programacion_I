// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

bool paridad(int bs);

int main()
{
    int N;
    cout<<"ingrese un numero entero para verificar si es par"<<endl;
    cin >>N;
    if (paridad(N)){
        cout<<"El numero es par"<<endl;
    }
    else {cout<<"El numero no es par"<<endl;
    }
    return 0;
}

bool paridad(int n)
{   
    if (n%2==0){
        return (true);
    }
    else{
        return (false);
    }
}