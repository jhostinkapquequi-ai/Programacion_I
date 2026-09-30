//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 5 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, i;
    cout<<"ingresse el tamaño de los dos vectores: "<<endl;
    cin>>N;
    vector <int> A(N);
    vector <int> B(N);
    vector <int> C(N*2);
    
    for (i=0; i<N; i++){
        cout<<"elemento "<<i+1<<" del vector A"<<endl;
        cin>>A[i];
    }

    for (i=0; i<N; i++){
        cout<<"elemento "<<i+1<<" del vector B"<<endl;
        cin>>B[i];
    }
    
    for (int i=0; i<N*2; i++){
        if (i<N){
            C[i]=A[i];
        }
        else{
            C[i]=B[i-N];
        }
    }
    cout<<"el vector combinado de A y B es: "<<endl;
    for (i=0; i<N*2; i++){
        cout<<"elemento "<<i+1<<" es: "<<C[i]<<endl;
    }
    
    return 0;
}