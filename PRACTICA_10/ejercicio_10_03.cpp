// Materia: Programacion, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani 
// Fecha de creacion: 14/10/26
// Numero de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void mayoramenor(int N, vector <float> &segundos);

int geneale(int max, int min);

void mostrar(int N, vector <float> segundos);

int main()
{
    int N=0;
    float k=0;
    vector <float> segundos;
    srand(time(0));
    cout << "ingrese la cantidad de corredores ";
    cin >> N;
    for (int i=0; i<N; i++){
        k=(float)geneale(2000, 1000);
        segundos.push_back(k/100);
    }
    mostrar(N, segundos);
    mayoramenor (N, segundos);
    mostrar(N, segundos);

    return 0;
}

int geneale(int max, int min){
return (rand()%(max-min+1)+min);
}

void mostrar(int N, vector <float> segundos){
    cout<<"\n";
    for (int i=0; i<N; i++){
        cout<<"Tiempo "<<i+1<<": "<<segundos[i]<<" s"<<endl;
    }
}


void mayoramenor(int N, vector <float> &segundos){
    int c=0;
    float aux;
    do{
        c=0;
        for (int i=0; i<N-1; i++){
            if (segundos[i+1]<segundos[i]){
                aux=segundos[i];
                segundos[i]=segundos[i+1];
                segundos[i+1]=aux;
                c++;
            }
        }
    }while(c!=0);
}