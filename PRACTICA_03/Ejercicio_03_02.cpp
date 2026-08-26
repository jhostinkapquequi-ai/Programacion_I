// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n,num,i,sumt=0,sumpar=0,sumimpar=0,sumpri=0,e, primo=0;
    srand (time(NULL));
    
    cout<<"ingrese la cantidad de numeros que se sumaran"<<endl;
    cin>>n;
    
    for (i=1;i<=n;i++)
    {
        num = (rand()%(100)-0);
        cout<<num<<"_";
        sumt += num;
        if(num%2==0){
            sumpar+=num;
        }
        else{
            sumimpar+=num;
        }
        for (e=1;e<=num;e++){
            if (num%e==0){
                primo++;
            }
        }
        if (primo==2){
            sumpri+=num;
        }
        primo=0;
        
    }
    cout << "\nla suma de todos los numeros es: "<<sumt<<endl;
    cout << "la suma de todos los numeros pares es: "<<sumpar<<endl;
    cout << "la suma de todos los numeros impares es: "<<sumimpar<<endl;
    cout << "la suma de todos los numeros primos es: "<<sumpri<<endl;
}