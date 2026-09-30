//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 4 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, elemento;
    cout<<"ingrese el tamaño de los vectores"<<endl;
    cin>>N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    for (int i=0; i<N; i++){
        cout<< "ingrese el "<<i+1<<" elemento: "<<"para el vector A"<<endl;
        cin >> elemento;
        A[i]=elemento;
    }
    
    for (int i=0; i<N; i++){
        cout<< "ingrese el "<<i+1<<" elemento: "<<"para el vector B"<<endl;
        cin >> elemento;
        B[i]=elemento;
    }
    
    for (int i=0; i<N; i++){
        C[i]=A[i]*B[i];
    }
    cout<<"el vector C es: "<<endl;
    for (int i=0; i<N; i++){
        cout<<"elemento "<<i+1<<" es: "<<C[i]<<endl;
    }

    return 0;
}