// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

void calculartiempo(int &segundos,int &minutos, int &horas)
{
    while (segundos >=3600){
        horas=segundos/3600;
        segundos=segundos%3600;
    }
    while (segundos >=60){
        minutos=segundos/60;
        segundos=segundos%60;
    }
}


int main()
{
    int segundos=0,minutos=0,horas=0;
	cout<<"ingrese la cantidad de segundos  "<<endl;
	cin>>segundos;
	calculartiempo(segundos,minutos,horas);
	cout<<horas<<":"<<minutos<<":"<<segundos;
	
	return 0;
}