// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;

int main() {
    int num, i;
    do {
    cout<<"ingrese un número entero dle 1 al 10: "<<endl;
    cin >> num;
    }while (num <= 0 || num>=11);
    cout << "tabla de multiplicar del numero: "<<num<<endl;
    for (i=1;i <= 10; i++ )
    {

        cout<<i<<"x"<<num<<"="<<i*num<<endl;  
    }
}