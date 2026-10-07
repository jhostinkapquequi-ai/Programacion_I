// Materia: Programacion I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani
// Carrera del estudiante: ing sistemas.
// Fecha creacion: 30/09/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void extraerHashtags(string texto, vector<string> &hashtags);

void mostrarHashtags(const vector<string> &hashtags);

int main() {
    string tweet;
    cout <<"Ingrese el tweet"<<endl;
    getline(cin, tweet);
    vector<string> hashtags;
    
    cout << "Texto original: " << tweet << endl;
    
    extraerHashtags(tweet, hashtags);
    
    mostrarHashtags(hashtags);
    
    return 0;
}

void extraerHashtags(string texto, vector<string> &hashtags) {
    string etiqueta;
    for (int i = 0; i < texto.length(); i++) {
        
        if (texto[i] == '#') {
            etiqueta = "";
            int j = i; 
            
            while (j < texto.length() && texto[j] != ' ') {
                etiqueta = etiqueta + texto[j];
                j++;
            }
            
            hashtags.push_back(etiqueta);
            i = j; 
        }
    }
}

void mostrarHashtags(const vector<string> &hashtags) {
    cout << "\nLista de hashtags: [";
    
    for (int i = 0; i < hashtags.size(); i++) {
        cout << hashtags[i];
        
        if (i < hashtags.size() - 1) {
            cout << ", ";
        }
    }
    
    cout << "]" << endl;
}