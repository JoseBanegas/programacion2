#include <iostream>

using namespace std;
/*Ingresar las horas trabajadas , el pago por hora y calcular el salario una deduccion del 5% de l salario y el total a pagar que es el sueldo restando las deducciones.
*/

int main()
{   int horas;
    double pxh,salario,deduccion,tp;
    cout << "Ingresar las horas...>" ;
    cin>> horas;

    cout<<"ingresar el pago por hora...>";
    cin>> pxh;

    salario= salario*pxh;

    deduccion= salario * 0.05;

    tp= salario-deduccion;


    cout<<"salario"<<salario<<"\n";
    cout<<"deduccion"<<deduccion<<"\n";
    cout<<"total a pagar"<<tp<<"\n";
    return 0;
}
