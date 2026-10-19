// Materia: Programacion, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani 
// Fecha de creacion: 14/10/26
// Numero de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void mayoramenor(int N, vector <int> &Puntuaciones);

int geneale(int max, int min);

void mostrar(int N, vector <int> Puntuaciones);

void mostrarpodio(vector <int> Puntuaciones);

int main()
{
    int N=0;
    vector <int> Puntuaciones;
    srand(time(0));
    cout << "ingrese la cantidad de jugadores ";
    cin >> N;
    for (int i=0; i<N; i++){
        Puntuaciones.push_back(geneale(100, 1));
    }
    mostrar(N, Puntuaciones);
    mayoramenor (N, Puntuaciones);
    mostrar(N, Puntuaciones);
    mostrarpodio(Puntuaciones);
    return 0;
}

int geneale(int max, int min){
return (rand()%(max-min+1)+min);
}

void mostrar(int N, vector <int> Puntuaciones){
    cout<<"\n";
    for (int i=0; i<N; i++){
        cout<<"Puntuacion "<<i+1<<": "<<Puntuaciones[i]<<endl;
    }
}


void mayoramenor(int N, vector <int> &Puntuaciones){
    int c=0;
    int aux;
    do{
        c=0;
        for (int i=0; i<N; i++){
            if (Puntuaciones[i+1]>Puntuaciones[i]){
                aux=Puntuaciones[i];
                Puntuaciones[i]=Puntuaciones[i+1];
                Puntuaciones[i+1]=aux;
                c++;
            }
        }
    }while(c!=0);
}

void mostrarpodio(vector <int> Puntuaciones){
    cout<<"\nprimer lugar: "<<Puntuaciones[0];
    cout<<"\nsegundo lugar: "<<Puntuaciones[1];
    cout<<"\ntercer lugar: "<<Puntuaciones[2];

}
