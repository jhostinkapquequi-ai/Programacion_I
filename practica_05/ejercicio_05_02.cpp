// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

int modificarvalores(int a, int &b)
{
	a*=2;
	b+=10;
	
	return a;
}
int main()
{
    int a,b;
	cout<<"ingrese dos valores para modificarlos "<<endl;
	cout<<"ingrese el primer valor: "<<endl;
	cin>>a;
    cout<<"ingrese el segundo valor: "<<endl;
    cin>>b;
    cout << "valor a: "<<a<<endl<<"valor b: "<<b<<endl;
    cout<<"\nmodificacion"<<endl;
    cout << "valor a: "<<modificarvalores(a, b)<<endl<<"valor b: "<<b<<endl;
	return 0;
}