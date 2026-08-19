// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera: ing. sistemas 
// Fecha de Creación: 19/08/2026

#include <iostream>
using namespace std;

int main() {
    int N, numero, digitos = 0, suma = 0, digito;
    
    do{
        cout << "Ingrese un numero entero positivo: ";
        cin >> N;
    }while(N<=0);
    
    numero = N; 
    while(numero > 0) {
        digito = numero % 10;  // Obtener ultimo digito
        suma += digito;        // Sumar digito
        digitos= digitos+ 1;   // Incrementar contador
        numero=numero/10;      // Eliminar ultimo digito
    }
    
    cout << "\nNumero ingresado: " << N << endl;
    cout << "Cantidad de digitos: " << digitos << endl;
    cout << "Suma de los digitos: " << suma << endl;
    
    return 0;
}