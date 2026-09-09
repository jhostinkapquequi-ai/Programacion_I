// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 07/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generar_aleatorio(int n){
    int aleatorio;
    aleatorio=(rand()%(3-1+1)+1);
    return aleatorio;
}
    
    
int panial(int &C1anio, int &C2anio, int &C3anio){
    int sum=0;
    C1anio*=6;
    C2anio*=3;
    C3anio*=2;

    sum = C1anio+C2anio+C3anio;
    return sum;
}

int main()
{
    int n=0, C1anio=0, C2anio=0, C3anio=0;
    srand(time(0));
    do{
        cout << "ingrese la cantidad de niños "<<endl;
        cin >> n;
    }while(n<=0);
    
    for (int i=1;i<=n;i++){
        switch (generar_aleatorio(n)){
            case 1:
                C1anio++;
                break;
            case 2:
                C2anio++;
                break;
            case 3:
                C3anio++;
                break;
        }
    }
    cout << "Ninos de 1 anios: " << C1anio << endl;
    cout << "Ninos de 2 anios: " << C2anio << endl;
    cout << "Ninos de 3 anios: " << C3anio << endl;
    cout << "la cantidad de paniales seria: "<<panial(C1anio, C2anio, C3anio);
    
    return 0;
}