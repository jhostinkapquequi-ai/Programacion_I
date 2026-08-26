// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N,num_aleatorio,sumt=0,IVA,sumiva=0,mayor=0,menor=10000,descuento,totaldescuento=0;
    srand(time(0));
    do{
        cout<<"ingrese la cantidad total de productos vendidos en el dia"<<endl;
        cin>>N;
    }while(N<=0);
    for (int i=0;i<=N;i++){
        num_aleatorio= (rand()&(10000-10+1)+10);
        //cout<<num_aleatorio<<"__"<<endl;
        if (num_aleatorio>mayor){
            mayor =num_aleatorio;
        }
        if (num_aleatorio<menor){
            menor=num_aleatorio;
        }
        if (num_aleatorio<2500){
            sumt+=num_aleatorio;
            IVA=num_aleatorio*0.13;
            sumiva+=IVA;
        }
        else{
            descuento=num_aleatorio*0.05;
            totaldescuento+=descuento;
            num_aleatorio-=descuento;
            sumt+=num_aleatorio;
            IVA=num_aleatorio*0.13;
            sumiva+=IVA;
        }
        
    }
    cout<<"la suma total del dinero ingresado en el dia es: "<<sumt<<"bs"<<endl;
    cout<<"el monto total del IVA es: "<<sumiva<<endl;
    cout<<"la suma total del descuento a favor de los clientes: "<<totaldescuento<<"bs"<<endl;
    cout<<"el producto mas caro fue de: "<<mayor<<"bs"<<endl;
    cout<<"el producto mas barato fue de: "<<menor<<"bs"<<endl;
    return 0;
}