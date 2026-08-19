// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera: ing. sistemas 
// Fecha de Creación: 19/08/2026
#include <iostream>
using namespace std;

int main() {
    double practica, teorica, participacion,notaFinal;
    
    cout<<"Ingrese la nota de practicas: ";
    cin>>practica;
    
    cout<<"Ingrese la nota teorica: ";
    cin>>teorica;
    
    cout<<"Ingrese la nota de participacion: ";
    cin>>participacion;
    
    notaFinal =(practica*0.30)+(teorica*0.60)+(participacion*0.10);
    
    cout<<"\nLa nota final del estudiante es: "<< notaFinal<<endl;
    
    return 0;
}