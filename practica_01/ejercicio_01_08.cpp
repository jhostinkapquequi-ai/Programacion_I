#include <iostream>
using namespace std;

int main() {
    int nota;
    
    cout<<"Ingrese una nota (0-100): ";
    cin>>nota;
    
    while(nota < 0 || nota > 100) {
        cout<<"Error: Nota fuera de rango"<<endl;
        cout<<"Ingrese una nota (0-100): ";
        cin>>nota;
    }
    
    cout<<"Nota registrada correctamente"<<endl;
    
    return 0;
}