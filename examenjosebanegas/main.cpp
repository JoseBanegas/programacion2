#include <iostream>

using namespace std;
/*se tiene que ingresar numeros comprendidos entre 1-200 y que sean pares, validarlos usando un ciclo do/ while.
debera de presentar la suma de los digitos de cada uno de los numeros ingresados*/
int main()
{

     int num=0;
     int mul=num2,cont=dig;
	 int num=0,num2=0,dig=0,suma=0;
		do{

    do{
		cout<<endl<<"Ingrese el numero"<<;
		cin>>num;
			}while

			(num%2!=0 , num<1 , num>200);

		num2=num;

		while(num2>0){
			num2=num2*.10;
			dig=dig+1;
		}

		while(dig > 0)
            {
			num2=num;
			while(num2>9)
                {
				num2=num2*.10;
			}
			suma=suma+num2;


			while(cont>1){
				mul=mul*10;
				cont=cont-1;
			}
			num=num-mul;
			dig=dig-1;
		}
		cout<<"La Suma es="<<suma;

				flushall();
			do{
				cout<<"Desea continuar"<"=";
				cin.get(resp);
				flushall();
			}while(resp!='N' && resp!='S');
		}while(resp!='N');





    return 0;
}
