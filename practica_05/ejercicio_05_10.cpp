// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void nprimos(int &primos)
{
    int n,prim=0;
    n=(rand()%(10000-1+1)+1);
    for (int i=1;i<=n;i++){
        cout<<i<<"_";
        for (int e=1;e<=i;e++){
            if (i%e==0){
                prim++;
            }
        }
        if (prim==2){
            primos++;
        }
        prim=0;
    }
    
}


int main()
{
    int primos=0;
    srand (time(0));
    nprimos(primos);
    cout<<"\ncantidad de primos: "<<primos<<endl;
    return 0;
}