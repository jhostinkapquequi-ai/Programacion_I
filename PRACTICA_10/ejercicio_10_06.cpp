// Materia: Programacion, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani 
// Fecha de creacion: 14/10/26
// Numero de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void nombrecompl(int N, vector <string> Nombres, vector <string> Apellidos, vector <string> &nombrescompletos);

int geneale(int max, int min);

void ordenarnombres(vector <string> &nombrescompletos);

void mostrar(vector <string> &nombrescompletos);

int main()
{
    int N=0;
    vector <string> Nombres {"pepe", "ariel", "victor", "pablo", "dylan", "jhon", "jhostin", "fabri", "daniel", "juan"};
    vector <string> Apellidos {"Mamani", "Huanca", "Salazar", "copa", "Vargas", "Perez", "Gabriel", "Flores", "Quispe", "Kapquequi"};
    vector <string> nombrescompletos;
    srand(time(0));
    cout << "ingrese la cantidad de nombres completos"<<endl;
    cin >> N;
    nombrecompl (N, Nombres, Apellidos, nombrescompletos);
    mostrar(nombrescompletos);
    cout<<"\n\tORDENADO: "<<endl;
    ordenarnombres(nombrescompletos);
    mostrar(nombrescompletos);
    return 0;
}

int geneale(int max, int min){
return (rand()%(max-min+1)+min);
}

void nombrecompl(int N, vector <string> Nombres, vector <string> Apellidos, vector <string> &nombrescompletos){
    string nom="";
    for (int i=0; i<N; i++){
        nom.append(Nombres[geneale(9, 0)]);
        nom.append(" ");
        nom.append(Apellidos[geneale(9, 0)]);
        nombrescompletos.push_back(nom);
        nom="";
    }
}

void ordenarnombres(vector <string> &nombrescompletos){
    int p=0;
    string aux;
    do{
        p=0;
        for (int i=0; i<nombrescompletos.size()-1; i++){
            
            
            if (nombrescompletos[i]>nombrescompletos[i+1]){
                aux=nombrescompletos[i];
                nombrescompletos[i]=nombrescompletos[i+1];
                nombrescompletos[i+1]=aux;
                
                p++;
            }
        }
    }while(p!=0);
}

void mostrar(vector <string> &nombrescompletos){
    for (int i=0; i<nombrescompletos.size(); i++){
        cout << i+1<<": "<< nombrescompletos[i]<<endl;
    }
}
