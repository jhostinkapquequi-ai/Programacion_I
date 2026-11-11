// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani.
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>

using namespace std;

struct cancion
{
    char titulo [100];
    char artista [52];
    int duracion;
};

void agregar(vector <cancion> &canciones);

void mostrar(vector <cancion> canciones);

int main ()
{
    int u=0;
    int opcion =0;
    vector <cancion> canciones;
    do{
        cout << "\t===PLAYLIST MUSICA==="<<endl;
        cout << "1. agregar cancion"<<endl;
        cout << "2. ver tu playlist"<<endl;
        cout << "3. salir" <<endl;
        cin >> opcion ;
        switch (opcion) {
            case 1:
                agregar (canciones);
                break;
            case 2:
                mostrar (canciones);
                break;
            case 3:
                cout <<"adios";
                u=1;
                break;
            default:
                cout <<"opcion invalida";
                break;
        }
        
    }while (u==0);
}


void agregar(vector <cancion> &canciones){
    cancion c;
    cin.ignore();
    cout << "ingrese el titulo de la cancion "<<endl;
    cin.getline(c.titulo, 100);
    cout << "ingrese el nombre del artista "<<endl;
    cin.getline(c.artista, 52);
    cout << " ingrese la duracion de la cancion " << endl;
    cin >> c.duracion;
    
    canciones.push_back(c);
}

void mostrar(vector <cancion> canciones)
{
    
    for (int j=0; j<canciones.size(); j++){
        int seg=canciones[j].duracion;
        int min=0;
        min = seg/60;
        seg = seg %60;
        cout << "titulo de la cancion: "<<canciones[j].titulo<<endl;;
        cout << "nombre sel artista: "<<canciones[j].artista<<endl;
        cout << "duracion de la cancion: " <<min<<":"<<seg<<endl; 
    }
}
