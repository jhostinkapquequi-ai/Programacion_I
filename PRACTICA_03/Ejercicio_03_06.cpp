// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    do {
        cout<<"ingrese 2 numeros enteros distintos"<<endl;
        cout<<"primer numero: "<<endl;
        cin>>a;
        cout<<"segundo numero: "<<endl;
        cin>>b;
    }while(a==b);
    if (a>b){
        for (i=a;b<=i;i--){
            cout<<i<<"_";
        }
    }
    else{
        for (i=a;i<=b;i++){
            cout<<i<<"_";
        }
    }
    
return 0;
}