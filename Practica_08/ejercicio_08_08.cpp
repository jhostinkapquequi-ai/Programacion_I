// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> dividirEnPalabras(string texto);

bool detectarPlagio(string oracionA, string oracionB);

int main() {
    string oracionA, oracionB;
    
    cout << "Ingrese la Oracion A: ";
    getline(cin, oracionA); 
    
    cout << "Ingrese la Oracion B: ";
    getline(cin, oracionB);
    
    cout << "\nAnalizando..." << endl;
    
    if (detectarPlagio(oracionA, oracionB)) {
        cout << "Salida: Alerta de plagio: Verdadero" << endl;
    } else {
        cout << "Salida: Alerta de plagio: Falso" << endl;
    }
    
    return 0;
}

vector<string> dividirEnPalabras(string texto) {
    vector<string> palabras;
    string palabra = "";
    
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == ' ') {
            if (palabra != "") {
                palabras.push_back(palabra);
                palabra = ""; 
            }
        } else {
            palabra = palabra + texto[i];
        }
    }
    
    if (palabra != "") {
        palabras.push_back(palabra);
    }
    
    return palabras;
}

bool detectarPlagio(string oracionA, string oracionB) {
    
    vector<string> palabrasA = dividirEnPalabras(oracionA);
    vector<string> palabrasB = dividirEnPalabras(oracionB);
    
    vector<bool> usada(palabrasB.size(), false);
    
    int coincidencias = 0;
    vector<string> palabrasComunes;
    
    for (int i = 0; i < palabrasA.size(); i++) {
        bool encontrada = false; 
        for (int j = 0; j < palabrasB.size(); j++) {
            if (!encontrada && !usada[j] && palabrasA[i] == palabrasB[j]) {
                coincidencias++;
                usada[j] = true;
                palabrasComunes.push_back(palabrasA[i]);
                encontrada = true;
            }
        }
    }
    
    if (coincidencias > 0) {
        cout << "Coinciden: (";
        for (int i = 0; i < palabrasComunes.size(); i++) {
            cout << "\"" << palabrasComunes[i] << "\"";
            if (i < palabrasComunes.size() - 1) {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
    return (coincidencias > 3);
}