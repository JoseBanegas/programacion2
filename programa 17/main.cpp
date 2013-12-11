#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*ingresar el nombre del alumno, luego debemos de pedir las tres notas parciales usando un ciclo,
 presentar el promedio, la nota mayor de los tres parciales.
preguntar si desea continuar, al final presentar el nombre del alumno con la mejor nota.*/
int main()
{
   char nombre[30];
   char resp;
   int nota, promedio, notamax, alumnomax, suma;
   char nombreMayor[30];
   char estado[15];


   do
   {
       cout<<"nombre del alumno..:";
       cin.getline(nombre,30);
       suma=0; notamax=0;
       for (int i=1; i<3;i++)

       {
           cout<<"ingresar el parcial.."<<i<<"..:";
           cin>>nota;
       }   suma+=nota;
       if (notamax<nota)
       {
           notamax=nota;
       }

       promedio=suma/3;

       if (promedio>=60)
       {
           strcpy(estado,"aprobado");
       }

       else
       {
           strcpy(estado, "reprobado");
       }
       cout<<"promedio del alumno..:"<<promedio<<"\n";
       cout<<"nota mayor..:"<<notamax<<"\n";
       cout<<" estado dela nota..:"<<estado<<"\n";
       _flushall();
       if (alumnomax<=promedio);
       {
           alumnomax=promedio;
           strcpy(nombreMayor, nombre);
       }
     _flushall();
   do
   {
       cout<<"desea continuar...:";
       cin.get(resp);



      } while ((resp!='N')and (resp!='S'));


     }  while (resp!='N');

cout<<"nombre del alumno con la mejor nota"<<nombreMayor ;
cout<<"con la nota"<<alumnomax<<"\n";


   return 0;
}
