// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

float calcularareacuadrado(float l)
{
    float area;
    return (area =l*l);
}

float calculararearectangulo(float b, float h )
{
    float area;
    return (area =b*h);
}

float calcularareacirculo(float r)
{
    float area, pi=3.14;
    return (area =pi*r*r);
}

int main()
{
    float l, b, h, r;
    int opcion;
	cout<<"1. area de un cuadrado "<<endl;
	cout<<"2. area de un rectangulo "<<endl;
	cout<<"3. area de un circulo"<<endl;
	cin>>opcion;
	switch (opcion)
	{
	    case 1:
	        cout<<"ingrese el lado del cuadrado: "<<endl;
	        cin>>l;
	        cout<<"el area del cuadrado es: "<<calcularareacuadrado(l);
	        break;
	   case 2:
	        cout<<"ingrese la base del rectangulo: "<<endl;
	        cin>>b;
	        cout<<"ingrese la altura del rectangulo: "<<endl;
	        cin>>h;
	        cout<<"el area del rectangulo es: "<<calculararearectangulo(b, h );
	        break;
	   case 3:
	        cout<<"ingrese el radio del circulo: "<<endl;
	        cin>>r;
	        cout<<"el area del circulo es: "<<calcularareacirculo(r);
	        break;
	   default:
	        cout<<"no se eligio ninguna opcion ";
	}
	return 0;
}