#include <iostream>

using namespace std;
/*Ingresar 5 numeros y determinar cuantos son divisibles entre 3*/
int main()
{int numero, cdiv3,promedio;
cdiv3=0;

   for(int i=0;i<5;i++)
   {
       cout<<"ingresar un numero entero";
       cin>> n
       umero ;
       if((numero % 3)==0)
       {
           cdiv3++;
       }
   }

   cout<<"contador de divisibles entre 3 es:"<<cdiv3<<"\n";
    return 0;
}
