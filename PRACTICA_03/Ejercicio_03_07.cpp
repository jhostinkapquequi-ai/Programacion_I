// Materia: Programación I, Paralelo 4
// Autor: jhostin daniel kapquequi huacani
// Carrera del estudiante: ing sistemas .
// Fecha creación: 26/08/2026

#include <iostream>
using namespace std;

int main() {
   int num,i,sum=0;
   do{
        cout<<"ingrese un numero positivo para verificar si es perfecto: "<<endl;
        cin>>num;
   }while(num <= 0);
   for (i=1; i<num; i++){
       if (num%i==0){
            sum+=i;
       }
   }
   if (sum==num){
       cout<<num<<" es un numero perfecto";
   }
   else{
       cout<<num<<" no es un numero perfecto";
   }
return 0;
}