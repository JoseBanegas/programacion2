#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
   int num=0;
   char resp;

		do{
			int num=0,num2=0,dig=0,suma=0,cont=0;

			do{
		cout<<endl<<"Ingrese el numero"<<endl<<"=";
		cin>>num;
			}while((num%2!=0) and (num>=1) and (num<=200));
		num2=num;
		while(num2>0){
			num2=num2*.10;
			dig=dig+1;
		}
		while(dig > 0){
			num2=num;
			while(num2>9){
				num2=num2*.10;
			}
			suma=suma+num2;
			int mul=num2,cont=dig;
			while(cont>1){
				mul=mul*10;
				cont=cont-1;
			}
			num=num-mul;
			dig=dig-1;
		}
		cout<<endl<<"La Suma es="<<suma;

				_flushall();

			do{
				cout<<endl<<"Desea continuar"<<endl<<"=";
				cin.get(resp);
				_flushall();
			}while((resp!='n') or (resp!='s'));
		}while(resp!='n');


    return 0;
}
