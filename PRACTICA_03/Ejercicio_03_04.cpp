// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
using namespace std;

int main() {
    int n,i,sumfactorial=0,factorial=1,e ;
    do{
        cout<<"ingrese la cantidad de valores para la serie"<<endl;
        cin>>n;
    }while (n<=0);
    
    for (i=1;i<=n;i++){
        for (e=1;e<=i;e++){
            factorial*=e;
        }
        sumfactorial +=factorial;
        factorial=1;
    }
    cout << "la suma de los factoriales es: "<<sumfactorial;
    
}