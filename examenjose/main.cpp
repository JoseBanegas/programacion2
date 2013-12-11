#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
  char resp;
  int prom,mayor,numero;
  int suma,cifra,contador,cdigi,sumas;
    contador=0;
    mayor=0;
    sumas=0;


    do
    {

    do
    {
        cout<<"Ingrese un numero...>";
        cin>>numero;


    }while (!(((numero % 2)==0) and (numero>=1) and (numero<=200)));
    _flushall();

    if (numero>mayor)
        {
            mayor=numero;
        }
        sumas+=numero;
        suma=0;

     while (numero>0)
            {
            cifra= numero % 10;
            suma+=cifra;
            numero=numero /10;
            cdigi++;
            }
            cout<<"suma total>"<<suma<<"\n";
            sumas+=numero;
            contador++;

                do
                {
                    cout<<"continuar..:";
                    cin.get(resp);

                    _flushall();
                }
                 while ((resp !='S') and  (resp !='N'));
                _flushall();

                } while (resp!='N');

    prom= sumas /contador ;
    cout<<"numero mayor ..:"<<mayor<<"\n";
    cout<<"promedio .:"<<prom<<"\n";

    return 0;
}
