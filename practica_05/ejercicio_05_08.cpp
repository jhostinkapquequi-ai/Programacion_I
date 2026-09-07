// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lanzamientomoneda(int &cara,int &cruz,int n)
{
    if ( (rand()%(1+0+1)+0)==1){
        cara++;
    }
    else {
        cruz++;
    }
}


int main()
{
    int n,cara=0,cruz=0;
    srand(time(0));
    cout<<"simulador de lanzamiento de una moneda"<<endl;
    cout<<"ingrese la cantidad de lanzamientos"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        lanzamientomoneda(cara,cruz,n);
    }
    cara=(cara*100)/n;
    cruz=(cruz*100)/n;
    cout << "porcentaje de caras: "<<cara<<"%"<<endl;
    cout << "porcentaje de cruces: "<<cruz<<"%"<<endl;
    return 0;
}