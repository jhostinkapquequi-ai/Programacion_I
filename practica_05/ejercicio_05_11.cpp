// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Sumapares(int n, int &promimpar){
    int sumpar=0,cimpar=0;
    for (int i=1;i<=n;i++){
        if (i%2==0){
            sumpar +=i;
        }
        else{
            promimpar+=i;
            cimpar++;
        }
    }
    promimpar/=cimpar;
    return sumpar;
}


void nprimos(int &primos, int n)
{
    int prim=0;
   
    for (int i=1;i<=n;i++){
        cout<<i<<"_";
        for (int e=1;e<=i;e++){
            if (i%e==0){
                prim++;
            }
        }
        if (prim==2){
            if (i>primos)
            primos=i;
        }
        prim=0;
    }
    
}


int main()
{
    int n, promimpar=0,mayornumprimo=0,primos=0;
    srand (time(0));
    n=(rand()%(1000-1+1)+1);
    //n=10;
    //cout<<"cantidad: "<<n<<endl;
    nprimos(primos,n);
    cout<<"\nsumatoria de numeros pares: "<<Sumapares(n,promimpar)<<endl;
    cout<<"promedio de los numeros impares: "<<promimpar<<endl;
    cout<<"primo mas alto: "<<primos;
    return 0;
}