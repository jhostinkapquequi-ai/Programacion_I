// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>

using namespace std;

void analizarURL(string url);

int main() {
    string url;
    getline(cin, url);
    
    cout << "URL de entrada: " << url << endl;
    cout << "\nComponentes extraidos:" << endl;
    
    analizarURL(url);
    
    return 0;
}

void analizarURL(string url) {
    int longitudDominio;
    string ruta;
    // 1. Buscamos la posición de "://" que separa el protocolo del resto
    size_t posProtocolo = url.find("://");
    
    if (posProtocolo == string::npos) {
        cout << "Error: URL no valida (falta '://')" << endl;
        return;
    }
    
    string protocolo = url.substr(0, posProtocolo);
    
    size_t posRuta = url.find("/", posProtocolo + 3);
    
    string dominio;
    if (posRuta != string::npos) {
        longitudDominio = posRuta - (posProtocolo + 3);
        dominio = url.substr(posProtocolo + 3, longitudDominio);
    } else {
        dominio = url.substr(posProtocolo + 3);
    }
    
    if (posRuta != string::npos) {
        ruta = url.substr(posRuta);
    } else {
        ruta = "(sin ruta)";
    }
    
    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio:   " << dominio << endl;
    cout << "Ruta:      " << ruta << endl;
}