//Materia: Programacion I, Paralelo 
//Autor: jhostin Daniel Kapquequi Huacani 
//Fecha de creaciom: 24/09/26
//Numero de ejercicios: 1 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void volta(float voltajes [100]){
    float V;
    for (int i=1;i<=100;i++){
        V=(rand()%(220-20+1)+20);
        voltajes [i-1]=V;
    }
}
    
void tem(float temperaturas[50]){
    float T;
    for (int i=1;i<=50;i++){
        T=(rand()%(100-0+1)+0);
        temperaturas [i-1]=T;
    } 
}
    
 void alfa(char alfanumericos[30]){
    char A;
    int c;
    
    for (int i=1;i<=30;i++){
        c=(rand()%(3-1+1)+1);
        if (c==1){
            A=(rand()%(10)+'0');
            alfanumericos [i-1]=A;
        }
        else if (c==2){
            A=(rand()%(26)+'A');
            alfanumericos [i]=A;
        }
        else if (c==3){
            A=(rand()%(26)+'a');
            alfanumericos [i-1]=A;
        }
    }
}
    
void anio (int anios[100]){
    int a;
    for (int i=1;i<=100;i++){
        a=(rand()%(2025-1990+1)+1990);
        anios[i]=a;
    }   
}
    
    
void veloci(float velocidades[32]){
    float Ve;
    for (int i=1;i<=32;i++){
        Ve=(rand()%(300-10+1)+10);
        velocidades [i]=Ve;
    }   
}

void distan(float distancias[1000]){
    float D;
    for (int i=1;i<=1000;i++){
        D=(rand()%(1000-1+1)+1);
        distancias [i]=D;
    } 
}
    
    


int main()
{
    float voltajes [100];
    float temperaturas [50];
    char alfanumericos [30];
    int anios [100];
    float velocidades [32];
    float distancias[1000];
    int i;
    srand (time (0));
    
    volta (voltajes);
    for (i=0;i<100;i++){
        cout << voltajes[i]<<"_";
    }
    cout<<endl;
    
    tem (temperaturas);
    for (i=0;i<100;i++){
        cout << temperaturas[i]<<"_";
    }
    cout<<endl<<endl;
    
    alfa(alfanumericos);
    for (i=0;i<30;i++){
        cout << alfanumericos[i]<<"_";
    }
    cout<<endl<<endl;
    
    anio(anios);
    for (i=0;i<100;i++){
        cout << anios[i]<<"_";
    }
    cout<<endl<<endl;
    
    veloci(velocidades);
    for (i=0;i<32;i++){
        cout << velocidades[i]<<"_";
    }
    cout<<endl<<endl;
    
    distan(distancias);
    for (i=0;i<1000;i++){
        cout << distancias[i]<<"_";
    }
    cout<<endl;
    return 0;
}