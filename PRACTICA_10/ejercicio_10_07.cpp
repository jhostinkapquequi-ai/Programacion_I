#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ale(int max, int min);

void llenarnotas(int matrixnotas[5][3]);

void mostrarnotas(int matrixnotas[5][3], vector <string> Nombres);

void promedios (int matrixnotas[5][3], vector <float> &Notasfinales);

void mostrarpromedios (vector <float> Notasfinales, vector <string> &Nombres);

void ordenarnombres(vector <string> &Nombres, vector <int> &posi);

void mostrarnombres(vector <string> &nombres);

void mostrarpromordenado(int matrixnotas [5][3], vector <float> Notasfinales, vector <string> &Nombres, vector <int> &posi);

int main(){
    vector <string> Nombres {"Pablo", "Rene", "juan", "Ana", "Maria"};
    int matrixnotas [5][3];
    vector <int> posi {0, 1, 2, 3, 4};
    vector <float> Notasfinales;
    srand (time(0));
    llenarnotas(matrixnotas);
    mostrarnotas(matrixnotas, Nombres);
    promedios(matrixnotas, Notasfinales);
    mostrarpromedios (Notasfinales, Nombres);
    ordenarnombres(Nombres, posi);
    //mostrarnombres(Nombres);
    mostrarpromordenado(matrixnotas, Notasfinales, Nombres, posi);
    
}


int ale(int max, int min){
    return (rand()%(max-min+1)+min);
}

void llenarnotas(int matrixnotas[5][3]){
    for (int i=0;i<5;i++){
        for (int j=0; j<3; j++){
            matrixnotas[i][j]=ale(100, 1);
        }
    }
}

void mostrarnotas(int matrixnotas[5][3], vector <string> Nombres){
    cout<<"\tPraccial 1\tParcial 2\tPracial 3"<<endl;
    for (int i=0;i<5;i++){
        cout << Nombres[i]<<" ";
        for (int j=0; j<3; j++){
            cout <<"\t\t"<< matrixnotas[i][j];
        }
        cout <<"\n";
    }
}

void promedios (int matrixnotas[5][3], vector <float> &Notasfinales){
    float pro=0;
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            pro+=matrixnotas[i][j];
            
        }
        pro/=3;
        Notasfinales.push_back (pro);
        pro=0; 
    }
}

void mostrarpromedios (vector <float> Notasfinales, vector <string> &Nombres){
    cout<<"\n\tPROMEDIOS"<<endl;
    for(int i=0; i<5; i++){
        cout <<Nombres[i]<<": "<< Notasfinales[i] <<endl;
    }
}

void ordenarnombres(vector <string> &Nombres, vector <int> &posi){
    int p=0;
    string aux;
    int aux2;
    char a, b;
    int c, d;
    do{
        p=0;
        for (int i=0; i<5-1; i++){
            a=Nombres[i][0];
            b=Nombres[i+1][0];
            //cout <<a<<" "<<b<<endl;

            c=static_cast<int>(a);
            d=static_cast<int>(b);
            //cout <<c<<" "<<d<<endl;
            if (c>90){
                c-=32;
            }
            if (b>90){
                d-=32;
            }
            if (c>d){
                aux=Nombres[i];
                Nombres[i]=Nombres[i+1];
                Nombres[i+1]=aux;
                
                aux2=posi[i];
                posi[i]=posi[i+1];
                posi[i+1]=aux2;
                p++;
            }
            //cout<<i<<endl;
        }
    }while(p!=0);
    //for(int i=0; i<5; i++){
    //    cout <<"pi"<<Nombres[i] <<endl;
    // }
}

void mostrarnombres(vector <string> &nombres){
    for(int i=0; i<5; i++){
        cout <<nombres[i] <<endl;
    }
}


void mostrarpromordenado(int matrixnotas [5][3], vector <float> Notasfinales, vector <string> &Nombres, vector <int> &posi){
    cout<<"\n\tORDENADO"<<endl;
    cout<<"\tPraccial 1\tParcial 2\tPracial 3"<<endl;
    for (int i=0;i<5;i++){
        cout << Nombres[i]<<" ";
        for (int j=0; j<3; j++){
            cout <<"\t\t"<< matrixnotas[posi[i]][j];
        }
        cout <<"\n";
    }
    cout<<"\n\tPROMEDIOS"<<endl;
    for(int i=0; i<5; i++){
        cout <<Nombres[i]<<": "<< Notasfinales[posi[i]] <<endl;
    }
}