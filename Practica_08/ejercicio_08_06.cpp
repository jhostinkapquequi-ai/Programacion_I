// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>

using namespace std;

// Prototipo de la función
string limpiarEspacios(string texto);

int main() {
    string entrada;
    cout<<"Ingrese un texto: "<<endl;
    getline(cin, entrada);
    
    cout << "Entrada: \"" << entrada << "\"" << endl;
    
    string salida = limpiarEspacios(entrada);
    
    cout << "Salida:  \"" << salida << "\"" << endl;
    
    return 0;
}

string limpiarEspacios(string texto) {
    string resultado = "";
    bool espacioPrevio = false;
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        
        if (c == ' ') {
            if (resultado.length() > 0 && !espacioPrevio) {
                resultado += c;
                espacioPrevio = true;
            }
        } else{
            resultado += c;
            espacioPrevio = false;
        }
    }
    
    if (resultado.length() > 0 && resultado[resultado.length() - 1] == ' ') {
        resultado.pop_back();
    }
    return resultado;
}