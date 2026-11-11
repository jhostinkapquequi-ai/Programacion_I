// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani.
// Fecha creación: 30/10/2026

#include <iostream>

using namespace std;

struct Cuentas
{
    char titular[30];
    int numerocuenta;
    double saldo;
};

void mostrar (Cuentas cuenta1);

void depositar (Cuentas &cuenta1, double monto); 

void retirar (Cuentas &cuenta1, double monto); 


int main()
{
    int u=0;
    int opcion=0;
    double monto=0;
    Cuentas cuenta1;
    cout<<"ingrese el titular de la cuenta: "<<endl;
    cin.getline(cuenta1.titular, 31);
    cout<<"ingrese el numero de cuenta: " << endl;
    cin>> cuenta1.numerocuenta;
    cout<< "ingrese su saldo: " << endl;
    cin>> cuenta1.saldo;
    do{
        cout << "1. depositar"<<endl;
        cout << "2. retirar"<<endl;
        cout << "3. mostrar saldo"<<endl;
        cout << "4. salir"<<endl;
        cout <<"==selecciones una opcion=="<<endl;
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "ingrese el monto que desea depositar" <<endl;
                cin >> monto;
                depositar (cuenta1, monto);
                break;
            case 2:
                cout << "ingrese el monto que desea retirar" <<endl;
                cin >> monto;
                retirar (cuenta1, monto);
                break;
            case 3:
                mostrar (cuenta1);
                break;
            case 4:
                cout<<"adios"<<endl;
                break;
            default:
                cout << "opcion invalida" <<endl;
                break;
        }
    }while(u==0);

    return 0;
}

void mostrar (Cuentas cuenta1)
{
    cout <<"\n============="<<endl;
    cout <<"titular: "<< cuenta1.titular<<endl;
    cout <<"Numero de cuenta: "<<cuenta1.numerocuenta<<endl;
    cout <<"saldo actual: "<<cuenta1.saldo<<endl;
}

void depositar (Cuentas &cuenta1, double monto)
{
    cuenta1.saldo += monto;
}

void retirar (Cuentas &cuenta1, double monto)
{
    if (cuenta1.saldo >= monto){
        cuenta1.saldo -= monto;
    }
    else
    {
        cout << "saldo insuficiente" <<endl;
    }
}


