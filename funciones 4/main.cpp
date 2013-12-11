#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


using namespace std;
/*ingresar la base y el exponente usando un procedimiento.
luego cacalcular la base y el exponente usando una funcion.
luego preguntar si desea continuar usando una funcion para devolver una respuesta s o n validada.

*/
char respuesta()
{
    char resp;
    do
    {
        cout<<"desea continuar..:";
        cin.get(resp);

    }while((resp!='s') and (resp!='n'));
return resp;

}

void ingreso(int &base, int&expo )
{
    cout<<"ingresar la base..:";
    cin>>base;
    cout<<"ingresae exponente..:";
    cin>>expo;
}

int potencia(int base ,int expo)
{
    int pot=1;
    for(int i=0; i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}
int main()
{char resp;
int base, expo,poten;
do
{
    ingreso(base,expo);
    poten=potencia(base,expo);
    _flushall();

    cout<<"potencia es"<<poten<<"\n";

    resp=respuesta();
}while (resp!='n');

    return 0;
}
