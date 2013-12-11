#include <iostream>

using namespace std;
/*Ingresar un numero y presentar la suma de cada una de las cifras.

Deberá de usar ciclo while, el operador mod (%), y explicar el programa con comentarios  dentro del main.
subir solo el main.
ejemplo si ingresamos 876 la suma es 21 */

int main()
{
      int num=0,num2=0,dig=0,suma=0;
		cin>>num;
		num2=num;
		while(num2>0){
			num2=num2*.10;//le quito el ultimo digito para saber de cuantos digitos es el numero
			dig=dig+1;//sumo 1 a digitos para llevar el conteo de digitos
		}
		while(dig > 0){
			num2=num;
			while(num2>9){//que quede 1 solo dijito
				num2=num2*.10;//le quito digito por digito 11*.10=1.1 y ocmo es int queda igual a 1
			}
			suma=suma+num2;//sumo el digito que quitare
			int mul=num2,cont=dig;//le doy el numero que quitare a mul para agregarle los 0 y asi restarlo del numero
			while(cont>1){
				mul=mul*10;//agrego los 0's
				cont=cont-1;
			}
			num=num-mul;//quito el dijito que ya sume
			dig=dig-1;//resto al cantidad de digitos que tengo
		}

		cout<<suma;//imprimo la suma

        return 0;
}

