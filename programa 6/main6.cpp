#include <iostream>

using namespace std;
/* ingresar nombre del empleado , el turno y las horas.
luego determinar el pago por hora, el pago bruto ihss y total a pagar. turno1=100, turno2=150, turno3=190;
 para el seguro si el salario es arriba de 7000 es igual a 245 y si no deducir del salrio bruto el 3.5%*/
int main()
{   char nombre[30];
    int turno,horas,pxh;
    double ihss,tp,pb;

    cout << "ingresar el nombre..>" ;
    cin.getline(nombre,30);

     cout << "ingresar el turno 1,2,3..>";
     cin>> turno;


     cout << "ingresar las horas..>"  ;
     cin>> horas;
     if(turno==1)
     {
         pxh=100;
     }
    else if(turno==2)
    {
        pxh=150;
    }
    else if (turno==3)

{
    pxh=190;
}

    else
{
    pxh=0;
}
pb=pxh*horas;

if (pb>7000)

{
    ihss=245;
}
else
{
    ihss=0.035*pb;
}
tp=pb-ihss;
cout<<"pago por horas"<<pxh<<"\n";
cout<<"pago pago bruto"<<pb<<"\n";
cout<<"sedguro social"<<ihss<<"\n";
cout<<"total a pagar"<<tp<<"\n";


    return 0;
}
