// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Prototipo de la función
string censurarMensaje(string mensaje, const vector<string> &prohibidas);

int main() {
    string mensaje;
    cout<<"Ingrese un mensaje: "<<endl;
    getline(cin, mensaje);
    
    vector<string> prohibidas = {"manco", "tonto", "noob"};
    
    cout << "CENSURADOR DE MENSAJE" << endl;
    cout << "Mensaje original: " << mensaje << endl;
    
    string mensajeCensurado = censurarMensaje(mensaje, prohibidas);
    
    cout << "Mensaje censurado: " << mensajeCensurado << endl;
    
    return 0;
}

string censurarMensaje(string mensaje, const vector<string> &prohibidas) {
    string palabra;
    
    for (int i = 0; i < prohibidas.size(); i++) {
    
        palabra = prohibidas[i];
        size_t posicion = mensaje.find(palabra);
        
        // Mientras se encuentre la palabra en el mensaje, la reemplazamos
        while (posicion != string::npos) {
            // Creamos un string de asteriscos del mismo tamaño que la palabra
            string asteriscos(palabra.length(), '*');
            
            // Reemplazamos la palabra por los asteriscos
            mensaje.replace(posicion, palabra.length(), asteriscos);
            
            // Buscamos la siguiente ocurrencia a partir de donde terminamos
            posicion = mensaje.find(palabra, posicion + palabra.length());
        }
    }
    
    return mensaje;
}