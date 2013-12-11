#include <iostream>

using namespace std;
/* ingresar 5 numeros y presentar el promedio de los pares e impares luego el numero mayor de los 5 numeros ingresados*/
int main()
{
    int numero , cpar,cimpar,contador,mayor,menor;
    double prompares,promimpares;
    int sumap,sumai;

    contador=0;
    cimpar=0;
    cpar=0;
    mayor=0;
    sumai=0;
    sumap=0;


    while(contador<5)
    {
        cout<<"ingresar un numero>";
        cin>> numero;


        if((numero%2)==0)
        {
            sumap+=numero;
            cpar++;

        }
        else

    {
        sumai+=numero;
        cimpar++;

    }
    contador ++;

    if (numero<menor)
    {
        menor=numero;

    }


    if(numero>mayor)
    {
        mayor=numero;
    }


}

    cout<<"numero mayor es...:"<<mayor<<"\n";
    cout<<"numero menor es...:"<<menor<<"\n";

    if (sumap!=0)
    {
        prompares=sumap/cpar;
    }

    else
    {
        prompares=0;
    }

    if (sumai !=0)
    {
        promimpares=sumai/cimpar;

    }
    else
    {
        promimpares=0;
    }


cout<<"promedio pares"<<prompares<<"\n";
cout<<"promedio de impares"<<promimpares<<"\n";

return 0 ;

}

