// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera: ing. sistemas 
// Fecha de Creación: 19/08/2026
#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout<<"Ingrese un numero del 1 al 7: ";
    cin>>numero;
    
    switch(numero) {
        case 1:
            cout<<"Lunes"<<endl;
            break;
        case 2:
            cout<<"Martes"<<endl;
            break;
        case 3:
            cout<<"Miercoles"<<endl;
            break;
        case 4:
            cout<<"Jueves"<<endl;
            break;
        case 5:
            cout<<"Viernes"<<endl;
            break;
        case 6:
            cout<<"Sabado"<<endl;
            break;
        case 7:
            cout<<"Domingo"<< endl;
            break;
        default:
            cout<<"Error: Numero fuera del rango (1-7)"<<endl;
            break;
    }
    return 0;
}