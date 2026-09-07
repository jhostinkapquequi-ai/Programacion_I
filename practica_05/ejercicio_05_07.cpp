// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
using namespace std;

void agregarnota(double &sumatotal,double &cantidadnota, double nuevanota)
{
    sumatotal+=nuevanota;
    cantidadnota++;
}


int main()
{
    int n;
    double sumatotal=0,cantidadnota=0,nuevanota;
	cout<<"ingrese la cantidad de notas "<<endl;
	cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"agregue nota: "<<endl;
        cin>>nuevanota;
        agregarnota(sumatotal,cantidadnota,nuevanota);
    }
	cout << "suma total: "<<sumatotal<<endl;
	cout << "cantidad notas: "<<cantidadnota<<endl;
	return 0;
}