// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num_aleatorio,N,intentos=0;
    srand (time(0));
    num_aleatorio = (rand()%(100-1+1))+1;
    do{
        cout<<"ingrese un numero entre 1 y 100"<<endl;
        cin>>N;
        if (N>num_aleatorio){
            cout<<"el numero que ingreso es mayor\n"<<endl;
            intentos++;
        }
        else{
            cout<<"el numero que ingreso es menor\n"<<endl;
            intentos++;
        }
    }while (N!=num_aleatorio);
    cout<<"\nADIVINASTE, EL NUMERO ERA: "<<num_aleatorio<<"\nNumero de intentos: "<<intentos;
    return 0;
}