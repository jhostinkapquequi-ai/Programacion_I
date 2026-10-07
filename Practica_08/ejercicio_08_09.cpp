// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convertirMinusculas(string texto);

void buscarContactos(const vector<string> &contactos, string prefijo);

int main() {
    vector<string> contactos = {"Marcelo", "María", "Martin", "Juan", "Marcos"};
    string prefijo;
    
    cout << "Ingrese el prefijo a buscar: ";
    cin >> prefijo;
    
    buscarContactos(contactos, prefijo);
    
    return 0;
}

string convertirMinusculas(string texto) {
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
    }
    return texto;
}

void buscarContactos(const vector<string> &contactos, string prefijo) {
    string prefijoMin = convertirMinusculas(prefijo);
    
    bool primerResultado = true; 
    bool encontrado = false;     
    
    cout << "Resultados: ";
    
    for (int i = 0; i < contactos.size(); i++) {
        if (contactos[i].length() >= prefijoMin.length()) {
            
            string inicioContacto = contactos[i].substr(0, prefijoMin.length());
            
            string inicioMin = convertirMinusculas(inicioContacto);
            
            if (inicioMin == prefijoMin) {
                if (!primerResultado) {
                    cout << ", "; 
                }
                cout << contactos[i]; 
                primerResultado = false;
                encontrado = true;
            }
        }
    }
    if (!encontrado) {
        cout << "No se encontraron contactos con ese prefijo.";
    }
    
    cout << endl;
}