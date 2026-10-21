// Materia: Programacion, Paralelo 4
// Autor: Jhostin Daniel Kapquequi Huacani 
// Fecha de creacion: 14/10/26
// Numero de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void menoramayor(int N, vector <double> &productos);

void mostrar(int N, vector <double> productos);

int productobarato(vector <double> &productos);

int productocaro(int N, vector <double> &productos);

int media(int N, vector <double> &productos);


int main()
{
    int N=0;
    float k=0;
    vector <double> productos;
    srand(time(0));
    cout << "Cantidad de productos que quiera ingresar: ";
    cin >> N;
    for (int i=0; i<N; i++){
        cout << "ingrese el "<<i+1<<"° producto"<<endl;
        cin >> k;
        productos.push_back(k);
    }
    mostrar(N, productos);
    menoramayor (N, productos);
    cout<<"\n\tORDENADO: ";
    mostrar(N, productos);
    cout << "el producto mas barato cuesta: "<<productobarato(productos)<<"bs"<<endl;
    cout << "el producto mas caro cuesta: "<<productocaro(N, productos)<<"bs"<<endl;
    cout << "la media de los productos es: "<<media(N, productos)<<"bs"<<endl;

    return 0;
}

void mostrar(int N, vector <double> productos){
    cout<<"\n";
    for (int i=0; i<N; i++){
        cout<<"Presio "<<i+1<<": "<<productos[i]<<"bs"<<endl;
    }
}


void menoramayor(int N, vector <double> &productos){
    int minimo=0;
    double aux;
    for (int i=0; i<N; i++){
        minimo=i;
        for (int j=0; j<N; j++){
            if (productos[j]>productos[minimo]){
                minimo=j;
            }
            swap(productos[i], productos[minimo]);
        }
    }
}

int productobarato(vector <double> &productos){
    return (productos[0]);
}

int productocaro(int N, vector <double> &productos){
    return (productos[N-1]);
}

int media(int N, vector <double> &productos){
    if (N%2==0){
        return (productos[(N/2)-1]+productos[N/2])/2;
    }
    else{
        return (productos[N/2]);
    }
}


