// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>

using namespace std;

bool validarTarjeta(string tarjeta);

int main() {
    string tarjeta;
    
    cout << "Ingrese los 16 digitos de la tarjeta: ";
    cin >> tarjeta;
    
    if (tarjeta.length() != 16) {
        cout << "Error: La tarjeta debe tener exactamente 16 digitos." << endl;
    } else {
        if (validarTarjeta(tarjeta)) {
            cout << "Tarjeta VALIDA" << endl;
        } else {
            cout << "Tarjeta INVALIDA" << endl;
        }
    }
    return 0;
}

bool validarTarjeta(string tarjeta) {
    int suma = 0;
    int digito;
    bool duplicar = false; // Bandera para saber si toca duplicar el dígito
    
    // Recorremos la cadena de DERECHA a IZQUIERDA
    for (int i = tarjeta.length() - 1; i >= 0; i--) {
        // Convertimos el caracter a su valor numérico
        // '0' en ASCII es 48, por lo que restando '0' obtenemos el número real
        digito = tarjeta[i] - '0';
        
        // Si la bandera está activa, duplicamos el dígito
        if (duplicar) {
            digito = digito * 2;
            
            // Si el resultado es mayor a 9, restamos 9 (equivale a sumar los dígitos)
            if (digito > 9) {
                digito = digito - 9;
            }
        }
        
        // Sumamos el dígito (ya sea el original o el duplicado/ajustado)
        suma = suma + digito;
        
        // Invertimos la bandera para el siguiente ciclo
        duplicar = !duplicar;
    }
    
    // La tarjeta es válida si la suma es divisible entre 10
    return (suma % 10 == 0);
}