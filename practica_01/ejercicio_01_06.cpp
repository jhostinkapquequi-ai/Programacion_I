// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera: ing. sistemas 
// Fecha de Creación: 19/08/2026
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout<<"Ingrese un numero: ";
    cin>>num;
    
    if(num%2==0) {
        cout<<num<<" es un numero par"<<endl;
    } 
    else {
        cout<<num<<" es un numero impar"<<endl;
    }
    return 0;
}