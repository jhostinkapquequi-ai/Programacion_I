// Materia: Programación I, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani.
// Fecha creación: 07/10/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

void llenarmatrix(int Matrix[100][100]);

void mostrarmatrix(int N,int Matrix[100][100]);

void estadistica(int N,int Matrix[100][100]);


int main(){
    int N=5;
    int u=0;
    int opcion;
    srand (time(NULL));
    int Matrix[100][100];
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            Matrix[i][j] = 0;
        }
    }
    
    do{
        cout << "\n==========================\n";
        cout << "\t MENU SALA DE CINE"<<endl;
        cout << "opcion 1: Mostrar la sala"<<endl;
        cout << "opcion 2: Comprar entrada"<<endl;
        cout << "opcion 3: Estadísticas"<<endl;
        cout << "opicon 4: salir"<<endl;
        
        cout <<"ingrese una opcion: "<<endl;
        cin>>opcion;
        
        switch(opcion){
            case 1:
                mostrarmatrix(N, Matrix);
                break;
            case 2:
                llenarmatrix(Matrix);
                break;
            case 3:
                estadistica(N, Matrix);
                break;
            case 4:
                cout<<"hasta luego";
                u=1;
            default:
                cout<<"opcion no valida"<<endl;
                break;
        }
    }while (u==0);
}

void llenarmatrix(int Matrix[100][100]){
    int fila, columna;
    cout << "ingrese que fila desea: ";
    cin >> fila;
    cout << "ingrese que asiento desea: ";
    cin >> columna;
    if (Matrix[fila-1][columna-1]==0){
        Matrix[fila-1][columna-1]=1;
        cout<<"reserva exitosa"<<endl;
    }
    else{
        cout<<"asiento no disponible"<<endl;
    }
    
}

void mostrarmatrix(int N, int Matrix[100][100]){
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            cout << Matrix[i][j]<<" ";
        }
        cout << endl;
    }
    cout<<"\n";
}

void estadistica(int N,int Matrix[100][100]){
    int ocupado=0, libre=0;
    for (int i =0; i<N; i++){
        for (int j =0; j<N; j++){
            ocupado+= Matrix[i][j];
        }
    }
    libre=25-ocupado;
    ocupado=(ocupado*100)/25;
    libre=(libre*100)/25;
    cout<<"porcentaje de ocupados: "<<ocupado<<"%"<<endl;
    cout<<"porcentaje de libres: "<<libre<<"%"<<endl;
}
