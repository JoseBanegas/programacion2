#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;

			int numero=0,contnumeros=0;
			double prom=0;
		do{

			do{
		cout<<endl<<"Ingrese el numero"<<endl<<"=";
		cin>>numero;
			}
        while(numero%2!=0 and numero<1 and numero>200);
			prom+=numero;

			contnumeros++;

		int xnumero=numero ,sumaDigi=0,xdigito=0;

		while(xnumero>0)
            {
		xdigito=xnumero%10;

		sumaDigi+=xdigito;

		xnumero=(xnumero-xnumero%10)*.10;
		}
		cout<<endl<<"La Suma es="<<sumaDigi;

				_flushall();
        do{
				cout<<endl<<"Desea continuar"<<endl<<"=";
				cin.get(resp);

				_flushall();

			}while(resp!='N' && resp!='S');
		}while(resp!='N');

		prom/=contnumeros;
		cout<<endl<<"El Promedio es="<<prom;
    return 0;
}
