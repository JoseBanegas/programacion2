#include <iostream>

using namespace std;
/*ingresar 10 numeros al final presentar cuantos numeros fueron divisibles entre 5 ,
el promedio de los divisibles entre 5
y el numero mayor de todos los numeros*/
int main()
{
   int
    x=0,mayor=0,num,divi=0;
		double prom=0;
        while(x<10)
            {
			cout<<x+1<<") ingrese un numero"<<endl<<"=";
			cin>>num;
			if(num%5==0){
				divi=divi+1;
				prom=prom+num;
			}
			if(num>mayor){
				mayor=num;
			}
			x=x+1;
		}
		cout<<endl<<"mayor: "<<mayor<<endl;
		cout<<endl<<"Numeros divisibles: "<<divi<<endl;
		cout<<endl<<"promedio:"<<prom/divi<<endl;
    return 0;
}
