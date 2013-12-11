#include <iostream>

using namespace std;
/*ingresar 10 numeros al final presentar cuantos numeros fueron divisibles entre 5 ,
el promedio de los divisibles entre 5
y el numero mayor de todos los numeros*/
int main()
{
     int numero , promedio,mayor,suma;

      contador=0;
      mayor=0;
      suma=0;

    while(contador<10);
    {
        cout<<"ingresar un numero>";
        cin>> numero;

        if((numero%5)==0)
        {
            suma+=numero;
            contador++

        }
        else

    {
      suma+=numero;
      contador++
        }


    if(numero>mayor)
    {
        mayor=numero;
    }


}

    cout<<"numero mayor es...:"<<mayor<<"\n";


    if (suma!=0)
    {
        promedio=suma/numero;
    }

    else
    {
        promedio=0;
    }


    }


cout<<"promedio"<<promedio<<"\n";
    return 0;
}
