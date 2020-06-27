#include <iostream>
using namespace std;
void funcion(char[]);
int main(void) {

cout<<endl;
cout<<"ENCRIPTAR CON LA CLAVE MUERCIELAGO"<<endl<<endl; 
char Mensaje[100];
cout<<"Texto a encriptar:";
cin.getline(Mensaje, 100);
funcion(Mensaje);
}
void funcion(char Mensaje[]){ 

for (int c=0; c<=100; c++) {
 
switch (Mensaje[c]) {
case 'm':
Mensaje[c]=48;
break;
case 'u':
Mensaje[c]=49;
break;
case 'r':
Mensaje[c]=50;
break;
case 'c':
Mensaje[c]=51;
break;
case 'i':
Mensaje[c]=52;
break;
case 'e':
Mensaje[c]=53;
break;
case 'l':
Mensaje[c]=54;
break;
case 'a':
Mensaje[c]=55;
break;
case 'g':
Mensaje[c]=56;
break;
case 'o':
Mensaje[c]=57;
break;
default:
Mensaje[c]=Mensaje[c];
}
}
cout<<"Texto Encriptado: "<<Mensaje;
cout<<endl;
 
}