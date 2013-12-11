#include <iostream>

using namespace std;

int main()
{int num, cifra , suma, maxi,mini,promedio, par,impar;
int contador=0;


    cout<<"ingresar un numero entero...:";
    cin>>num;
    suma=0;
    cout<<"numero al revez...:";
    maxi=0;
    mini=9;


    while (num>0)


        {cifra=num%10;
    cout<<cifra;
    num=num/10;
    suma+=cifra;

    if(((cifra%2))==0)
        par++;
    else
        impar++;

    if (cifra>maxi)
        maxi=cifra;


    if(cifra<mini)
        mini=cifra;


contador ++;
        }


        promedio=suma/contador;

      cout<<"\n";
      cout<<"suma de las cifras"<<suma<<"\n";
      cout<<"cifra mayor es"<<maxi<<"\n";
      cout<<"cifra menor es"<<suma<<"\n";
      cout<<"promedio"<<promedio<<"\n";
      cout<<"numero de cifras pares"<<par<<"\n";

    return 0;
}
