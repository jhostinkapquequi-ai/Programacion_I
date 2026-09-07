// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int factorialaleatorio(int &factorial)
{
    int num;
    num=(rand()%(10+1+1)+1);
    for (int i=1;i<=num;i++){
        factorial*=i;
    }
    return num;
}


int main()
{
    int factorial=1;
    cout<<"el factorial de "<<factorialaleatorio(factorial)<<" es: "<<factorial;
    return 0;
}