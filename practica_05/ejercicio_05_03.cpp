// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

float calcularperciototal(float pbase, float &impuesto)
{
    float ptotal;
    impuesto=13;
	ptotal=pbase;
	ptotal+=pbase*(impuesto/100);
	return ptotal;
}
int main()
{
    float pbase, impuesto,preciototal=0;
	cout<<"ingrese el precio base y el porcentaje de impuestos  "<<endl;
	do{
	    cout<<"precio base: "<<endl;
	    cin>>pbase;
	}while(pbase<=0);
    cout<<"porcentaje impuestos: "<<endl;
    cin>>impuesto;
    if (impuesto >=0 ){
        preciototal=pbase;
        preciototal+=pbase*(impuesto/100); 
        cout<<"el precio final es: "<<preciototal<<endl;
        
    }
    else{
        cout<<"el precio final (con impuestos iva) es: "<<calcularperciototal(pbase, impuesto)<<endl;
    }
        
	return 0;
}