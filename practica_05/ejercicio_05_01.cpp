// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

int intercambiarvalores(int &a, int &b)
{
	int c=a;
	a=b;
	b=c;
	
	return 0;
}
int main()
{
	int a,b;
	cout<<"ingrese dos valores para intercambiarlos "<<endl;
	cout<<"ingrese el primer valor: "<<endl;
	cin>>a;
    cout<<"ingrese el segundo valor: "<<endl;
    cin>>b;
    cout << "valor a: "<<a<<endl<<"valor b: "<<b<<endl;
    intercambiarvalores(a, b);
    cout<<"\nintercambio"<<endl;
    cout << "valor a: "<<a<<endl<<"valor b: "<<b<<endl;

	return 0;
}