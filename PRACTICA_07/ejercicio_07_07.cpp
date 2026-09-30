//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 7

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int elemento;
    vector<int> vector(100);
    
    cout<<"ingrese elementos para el vector[100]"<<endl;
    cout<<"para dejar de introducir elementos introdusca un numero negativo"<<endl;
    int i=0;
    do{
        cout<<"elemento "<<i+1<<": "<<endl;
        cin>>elemento;
        vector[i]=elemento;
        i++;    
    }while (elemento>=0);
    vector.erase(vector.begin()+i-1);
    
    cout<<"vector completo :"<<endl;
    int e=0;
    while (e<i-1){
        cout<<vector[e]<<" ";
        e++;
    }
    
    return 0;
}