// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani.
// Fecha creación: 30/10/2026

#include <iostream>

using namespace std;

struct datosjugador
{
    char nickname[30];
    int nivel;
    int experiencia;
};

void levelup (datosjugador &jugador1); 

void mostrar (datosjugador jugador1);

int main()
{
    datosjugador jugador1;
    cout<<"ingree sus datos de jugador: \n"<<endl;
    cout<<"ingrese su nickname"<<endl;
    cin.getline(jugador1.nickname, 31);
    cout<<"ingrese su nivel actual: " << endl;
    cin>> jugador1.nivel;
    cout<< "ingrese su experiencia actual: " << endl;
    cin>> jugador1.experiencia;
    mostrar (jugador1);
    levelup (jugador1);
    mostrar (jugador1);

    return 0;
}

void mostrar (datosjugador jugador1)
{
    cout <<"\n============="<<endl;
    cout <<"nickname: "<<jugador1.nickname<<endl;
    cout <<"nivel: "<<jugador1.nivel<<endl;
    cout <<"experiencia: "<<jugador1.experiencia<<endl;
}

void levelup (datosjugador &jugador1)
{
    int expe=0;
    cout << "\ningrese la cantidad de puntos de experiencia que gano"<<endl;
    cin >> expe;
    jugador1.experiencia+=expe;
    if (jugador1.experiencia >= 100){
        cout << "\nSUBISTE DE NIVEL!!!" << endl;
        jugador1.nivel+=1;
        jugador1.experiencia-=100;
    }
}

