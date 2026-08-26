// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0 ;
    do{
        cout<<"ingrese la cantidad de valores para la serie"<<endl;
        cin>>n;
    }while (n<=0);
    
    for (i=1;i<=n;i++){
        sum +=i;
    }
    cout << "la suma es: "<<sum;
    
}