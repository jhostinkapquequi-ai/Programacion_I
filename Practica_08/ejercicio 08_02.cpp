// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>

using namespace std;

bool esContrasenaSegura(string contrasena);

int main() {
    string password;
    
    cout << "Ingrese su contrasena: ";
    cin >> password;
    
    if (esContrasenaSegura(password)) {
        cout << "Contrasena segura" << endl;
    } else {
        cout << "Contrasena vulnerable" << endl;
    }
    
    return 0;
}

// Funcion que verifica si la contrasena cumple con las politicas
bool esContrasenaSegura(string contrasena) {
    // Requisito 1: Al menos 8 caracteres de longitud
    if (contrasena.length() >= 8) {
        bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneNumero = false;
    bool tieneEspecial = false;
   
    for (int i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
 
        if (c >= 'A' && c <= 'Z') {
            tieneMayuscula = true;
        }
   
        else if (c >= 'a' && c <= 'z') {
            tieneMinuscula = true;
        }
   
        else if (c >= '0' && c <= '9') {
            tieneNumero = true;
        }
        
        else {
            tieneEspecial = true;
        }
    }
    return (tieneMayuscula && tieneMinuscula && tieneNumero && tieneEspecial);
    }
    else{
        return false;
    }
}