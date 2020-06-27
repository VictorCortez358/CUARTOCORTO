#include "iostream"
#include "cmath"
using namespace std;
void funcion1(double,double[],int);
void funcion2(double,double[],int);
int main(void)
{
    cout<<endl;
    cout<<"VERIFICAR SI APROBO O REPROBO"<<endl<<endl;
    double promedio=0;
    double notas[5];
    int alumnos;
    funcion1(promedio,notas,alumnos);
    funcion2(promedio,notas,alumnos);
    cout<<endl;

}
void funcion1(double promedio,double notas[],int alumnos)
{
    int cont=0;
    cout<<"Ingrese la cantidad de alumnos a evaluar: ";
    cin>>alumnos;
    for (int i=0; i<alumnos;i++){
        cout<<"Alumno numero "<<++cont<<":";
        for (int j=0; j<=4;j++){
            cout<<"\nDigite la calificacion del alumno "<<++cont<<":"<<endl;
            cin>>notas[j];
            notas[j]*0.20;
            promedio+=notas[j];
         }
         promedio/=5;
         cout<<"La nota final es : "<<promedio<<endl;
}
}
void funcion2(double promedio,double notas[],int alumnos)
{
    int n= 1;
    for(int i = 0; i < n; i++){
        if(notas[i]>7){
          cout<<"APROBO"<<endl;
            }
        else{ 
         cout<<"REPROBO";
        }
        
       
 }
}

