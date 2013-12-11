#include <iostream>

using namespace std;
/* ingresar 5 numeros pares a un arreglo usando un procedimiento.

luego usando una funcion para poder obtener la suma de los numeros mayores a 100.

elaborar una funcion donde podamos encontrar el numero mayor de los numeros que son divisibles entre 5.

elaborar un procedimiento donde podamos calcular el doble de cada uno de los numeros del arreglo
y lo podamos copiar en otro arreglo.

elaborar un procedimiento donde podamos calcular el doble de cada uno de los numeros del arreglo
y lo podamos copiar en otro arreglo.

elaborar otro procedimiento donde presentemos el contenido de los dos arreglos.

*/

char resp;
		int num=0;
		do{
			int num=0,num2=0,dig=0,suma=0;
			do{
		cout<<endl<<"Ingrese el numero"<<endl<<"=";
		cin>>num;
			}while(num%2!=0 || num<1 || num>200);


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

				flushall();
			do{
				cout<<endl<<"Desea continuar"<<endl<<"=";
				cin.get(resp);
				flushall();
			}while(resp!='N' && resp!='S');

		}while(resp!='N');

		return 0;

