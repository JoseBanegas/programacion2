#include <iostream>

using namespace std;
/*
ingresar la nota acumulada y examen y luego calcular
la nota final y la observacionde aprobado o reprobado.

*/
int main()
{
   int notaA,notaE,notaF;

   cout<<"Ingresar nota examen..:";
   cin>> notaA;

   cout<<"Ingresar nota Acumulada..:";
   cin>> notaE;

   notaF= notaA + notaE;

   if (notaF>=60)
   {
       cout<<"Estado : Aprobado";
   }
   else
   {
       cout<<"Estado : Reprobrobado";
   }
   cout<<"\n";
   cout<<"Nota Final es "<<notaF<<"\n";

    return 0;
}
