// Materia: Programación I, Paralelo 4
// Autor: jhostin dabiel kapquequi huacani
// Carrera del estudiante: Ing sistemas.
// Fecha creación: 27/08/2026

#include <iostream>
using namespace std;

int leernotas(){
    int notas;
    cin>>notas;
    while (notas<0 || notas >100){
        cout<<"las notas deben ser mayor a 0 y menor o igual a 100"<<endl;
        cout<<"ingrese la nota"<<endl;
        cin>>notas;
    }
    return (notas);
}

int notafinal()
{
    int p1, p2, p3, Ef=0;
    cout<<"ingrese las notas del primer parcial"<<endl;
    p1=leernotas();
    cout<<"ingrese las notas del segundo parcial"<<endl;
    p2=leernotas();
    cout<<"ingrese las notas del tercer parcial"<<endl;
    p3=leernotas();
    if (p1 >= 60 && p2>=60 && p3>=60){
        cout<<"ingrese las notas del Examen final"<<endl;
        Ef=leernotas();
        cout<<"las notas del primer parcial son: "<<p1<<endl;
        cout<<"las notas del segundo parcial son: "<<p2<<endl;
        cout<<"las notas del tercer parcial son: "<<p3<<endl;
        cout<<"las notas del examen final son: "<<Ef<<endl;
        return(((( ( p1 + p2 +p3 ) ) *0.5 )*0.33) + (Ef * 0.5));
    }
    else {
        cout<<"las notas del primer parcial son: "<<p1<<endl;
        cout<<"las notas del segundo parcial son: "<<p2<<endl;
        cout<<"las notas del tercer parcial son: "<<p3<<endl;
        cout<<"las notas del examen final son: "<<Ef<<endl;
        return((( ( p1 + p2 +p3 ) ) *0.5 )*0.33);
    }
    
}


int main()
{
    int n, Nfinal, caprovados=0, creprovados=0, promfinales=0;
    cout<<"programa modular paraanalizar el rendimiento académico de N estudiantes en la asignatura de Programación I."<<endl;
    do{
    cout<<"ingrese la cantidad de estudiantes: "<<endl;
    cin >> n;
    }while (n<=0);
    
    for (int i=1;i<=n;i++){
        Nfinal= notafinal();
        cout <<"la nota final es: "<<Nfinal<<endl;
        if (Nfinal>=51)
        {
            cout<<"aprovado\n"<<endl;
            caprovados++;
        }
        else 
        {
            cout<<"reprovado\n"<<endl;
            creprovados++;
        }
        promfinales+=Nfinal;
    }
    caprovados=(caprovados*100)/n;
    creprovados=(creprovados*100)/n;
    promfinales/=n;
    cout<<"\nel porcentaje de aprovados es: "<<caprovados<<"%"<<endl;
    cout<<"el porcentaje de reprovados es: "<<creprovados<<"%"<<endl;
    cout<<"el promedio de notas finales es: "<<promfinales<<endl;
    return 0;
}
