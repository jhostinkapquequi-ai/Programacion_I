//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 6

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N=5, elemento;
    vector<int> vector_1(N);
    vector<int> vector_2(N);
    vector<int> vector_3(N);
    for (int i=0; i<N; i++){
        cout<< "ingrese el "<<i+1<<" elemento: "<<"para el vector 1"<<endl;
        cin >> elemento;
        vector_1[i]=elemento;
    }
    
    for (int i=0; i<N; i++){
        cout<< "ingrese el "<<i+1<<" elemento: "<<"para el vector 2"<<endl;
        cin >> elemento;
        vector_2[i]=elemento;
    }
    
    for (int i=0; i<N; i++){
        vector_3[i]=vector_1[i]+vector_2[i];
    }
    cout<<"el vector 3 es: "<<endl;
    for (int i=0; i<N; i++){
        cout<<"elemento "<<i+1<<" es: "<<vector_3[i]<<endl;
    }

    return 0;
}