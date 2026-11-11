// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani.
// Fecha creación: 30/10/2026

#include <iostream>

using namespace std;

struct tiempo
{
   int horas;
   int minutos;
   int segundos;
};

void conversion(int &seg, int &min, int &hrs);

void sum(tiempo time1, tiempo time2, tiempo &time3);

int main()
{
    int seg=0;
    int min=0;
    int hrs=0;
    tiempo time1, time2, time3;
    cout << "PRIMER TIEMPO"<<endl;
    do{
        cout << "ingrese la cantidad de segundos "<<endl;
        cin >> seg;
    }while (seg<0);
    
    conversion(seg, min, hrs);
 
    cout << hrs << "/" << min << "/" << seg << endl;
    time1.horas=hrs;
    time1.minutos=min;
    time1.segundos=seg;
    
    seg=0;
    min=0;
    hrs=0;
    
    cout << "\nSEGUNDO TIEMPO"<<endl;
    do{
        cout << "ingrese la cantidad de segundos "<<endl;
        cin >> seg;
    }while (seg<0);
    conversion(seg, min, hrs);

    cout << hrs << "/" << min << "/" << seg << endl;
    time2.horas=hrs;
    time2.minutos=min;
    time2.segundos=seg;
    
    sum(time1, time2, time3);
    cout << "\nsuma de los 2 tiempos: "<<endl;
    cout << time3.horas <<"/"<<time3.minutos<<"/"<<time3.segundos;

    return 0;
}

void conversion(int &seg, int &min, int &hrs){
    hrs = seg/3600;
    seg = seg%3600;
    
    min = seg/60;
    seg = seg%60;
}


void sum(tiempo time1, tiempo time2, tiempo &time3)
{
    time3.horas=time1.horas+time2.horas;
    time3.minutos=time1.minutos+time2.minutos;
    time3.segundos=time1.segundos+time2.segundos;
    if (time3.segundos>=60){
        time3.minutos+=1;
        time3.segundos-=60;
    }
    if (time3.minutos>=60){
        time3.horas+=1;
        time3.minutos-=60;
    }
}

