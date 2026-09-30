//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    double promedio, suma=0, varianza;

    cout << "Ingrese la cantidad de numeros (N): ";
    cin >> N;
    
    vector<int> calificaciones(N);
    vector<double> desviacion(N);

    for (int i = 0; i < N; i++) {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }

    for (int i = 0; i < N; i++) {
        suma += calificaciones[i];
    }

    promedio = suma / N;
    cout << "\nSuma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    cout << "\nCalificacion\tDesviacion\n";
    for (int i = 0; i < N; i++) {
        desviacion[i] = calificaciones[i] - promedio;
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }

    double sumaCuadrados = 0;
    for (int i = 0; i < N; i++) {
        sumaCuadrados += desviacion[i] * desviacion[i];
    }
    varianza = sumaCuadrados / N;

    cout << "\nVarianza: " << varianza << endl;

    return 0;
}