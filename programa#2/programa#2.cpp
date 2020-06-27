#include "iostream"
#include "cmath"
using namespace std;
void funcionpromedio(double,double[]);
void comparar(double,double[]);
int main(){
    cout<<endl;
    cout<<"MEDIA DE ALTURAS DE 25 ALUMNOS"<<endl<<endl;
    double datos[24],promedio=0;
    funcionpromedio(promedio,datos);
    comparar(promedio,datos);
    return 0;
}
void funcionpromedio(double promedio,double datos[]) 
{
    int i;
    int cont=0;
	for( i=0;i<=24;i++){
        cout<<"Ingrese la altura numero "<<++cont<<":"<<endl;
        cin>>datos[i];
        promedio+=datos[i]; 
        
    }
    cout<<"La media es: "<<promedio/25<<endl;
}
void comparar(double promedio,double datos[])
{
    int alumnos=24;
    int arriba=0,abajo=0;
    for(int i=0;i<alumnos+1;i++)
    {
        if(datos[i]>promedio)
        {
            arriba +=1;
        }
        else
        {
            abajo+=1;
        }   
    }
    cout<<"La cantidad arriba del promedio es de : "<<arriba<<endl;
    cout<<"La cantidad abajo del promedio es de : "<<abajo;
    cout<<endl;
}





    