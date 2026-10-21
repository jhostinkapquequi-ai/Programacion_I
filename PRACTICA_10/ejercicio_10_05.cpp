#include <iostream>
#include <string>

using namespace std;


void ordenar(string &palabra);

void mostrar(string &palabra);

int main(){
    string palabra;
    cout<<"ingrese la palabra para ordenarla: "<<endl;
    cin>>palabra;
    mostrar(palabra);
    ordenar(palabra);
    mostrar(palabra);
    
}

void ordenar(string &palabra){
    int p=0;
    char aux;
    char a, b;
    int c, d;
    do{
        p=0;
        for (int i=0; i<palabra.size()-1; i++){
            a=palabra[i];
            b=palabra[i+1];

            c=static_cast<int>(a);
            d=static_cast<int>(b);

            if (c>90){
                c-=32;
            }
            if (b>90){
                d-=32;
            }
            if (c>d){
                aux=palabra[i];
                palabra[i]=palabra[i+1];
                palabra[i+1]=aux;
                p++;
            }
            //cout<<i<<endl;
        }
    }while(p!=0);
    //for(int i=0; i<5; i++){
    //    cout <<"pi"<<Nombres[i] <<endl;
    // }
}

void mostrar(string &palabra){
    cout<<"\n";
    for(int i=0; i<palabra.size(); i++){
        cout <<palabra[i];
    }
}