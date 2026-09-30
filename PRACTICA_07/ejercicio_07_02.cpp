//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 2 

#include <iostream>
using namespace std;

int main() {
    
    double voltios[9] = {11.95, 16.32, 12.15,
                         8.22, 15.98, 26.22,
                         13.54, 6.45, 17.59};

    for (int i = 0; i < 9; i++) {
        cout << voltios[i] << "  ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
    return 0;
}