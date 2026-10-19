// Materia: Programacion, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani 
// Fecha de creacion: 14/10/26
// Numero de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void nombrescompletos(int N, vector <string> Nombres, vector <string> Apellidos);

int geneale(int max, int min);

int main()
{
    int N;
    vector <string> Nombres {"pepe", "ariel", "victor", "pablo", "dylan", "jhon", "jhostin", "fabri", "daniel", "juan"};
    vector <string> Apellidos {"Mamani", "Huanca", "Salazar", "copa", "Vargas", "Perez", "Gabriel", "Flores", "Quispe", "Kapquequi"};
    srand(time(0));
    cout << "ingrese la cantidad de nombres completos";
    cin >> N;
    nombrescompletos (N, Nombres, Apellidos);
    
    return 0;
}

int geneale(int max, int min){
return (rand()%(max-min+1)+min);
}

void nombrescompletos(int N, vector <string> Nombres, vector <string> Apellidos){
    for (int i=0; i<N; i++){
        cout << i+1<<": "<< Nombres[geneale(9, 0)] << " " << Apellidos[geneale(9, 0)]<<endl;
    }
}
