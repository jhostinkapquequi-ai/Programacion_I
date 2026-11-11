// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani.
// Fecha creación: 30/10/2026

#include <iostream>
#include <string>

using namespace std;

struct Paquetes
{
    char codigorastreo [13];
    char direccion [50];
    double peso;
    string estado;
    
};

void delivery (Paquetes paquete);

int main(){
    Paquetes paquete; 
    cout << "ingrese el codigo de rastreo de su paquete"<<endl;
    cin.getline(paquete.codigorastreo, 13);
    cout << "ingrese la direccion de destino"<<endl;
    cin.getline(paquete.direccion, 13);
    cout << "ingrese el peso total del paquete"<<endl;
    cin >> paquete.peso;
    paquete.estado = "En transito";
    delivery (paquete);
}

void delivery (Paquetes paquete)
{
    cout << "RECIBO" << endl;
    cout << "codigo de rastreo de su paquete: "<<paquete.codigorastreo<<endl;
    cout << "direccion de destino: "<<paquete.direccion<<endl;
    cout << "peso total del paquete: "<<paquete.peso<<"kg"<<endl;
    paquete.estado = "Entregado";
    cout << "estado del paquete: "<< paquete.estado<<endl;
    cout << sizeof(paquete);
}

