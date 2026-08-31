// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int sumatoria(int bs);

int main()
{
    int N;
    do{
        cout<<"ingrese un numero entero positivo"<<endl;
        cin >>N;
    }while(N<=0);
    
    cout<<"la sumatoria hasta "<<N<<" es: "<<sumatoria(N);
    return 0;
}

int sumatoria(int n)
{   
    int sum=0;
    for (int i=1;i<=n;i++){
        sum +=i;
    }
    return (sum);
}