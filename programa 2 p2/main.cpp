#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
ingresar el nombre del empleado, el turno y las ventas.
validar que el turno solo sea 1,2,3. usar (un procedimiento)

calcular usando un procedimiento, la comision ganada, el ihss,
y total a pagar. 1=5% ,2=3%, 3=6%.

presentar los datos calculados usando un procedimiento.

*/
char nombre[30];
int ventas, turno, ihss, comision, tp
void ingreso(char nombre[],int &turno, int &ventas)
{
    cout<<"ingresar el nombre del empleado :";
    cin.getline(nombre,30);

    do
        {
            cout<<"ingresar el turno 1,2,2...:";
            cin >> turno;



        }while((turno<1) and (turno>3));

        cout<<"ingresar las ventas:";
        cin>> ventas;

     void calcular( int &turno , ventas)
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
