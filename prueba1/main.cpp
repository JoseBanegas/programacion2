#include <iostream>

using namespace std;
/*ingresar el nombre del empleado, las horas trabajadas, el turno,
luego determinar las horas normales que son las primeras 40 y las extra que son las mayores a 40

debera de obtener pago por hora usando el turno, luego un bono , el pago bruto que son la suma de los pagos normales y extras.
ihss y total a pagar.

turno  pn  pe
1      100 130
2      135 140
3      145 150

*/
int main()
{
    char nombre[30];

    int horast, horasn, horasx , pxh, turno, bono, pb, pe , pn , tp, ihss;

    Bono

     cout<<"ingresar el  nombre..>";
     cin.getline(nombre,30);

     cout << "ingresar el turno 1,2,3..>";
     cin>> turno;

     cout << "ingresar las horas..>"  ;
     cin>> horast;



     if(turno==1)
     {
         pxh=100;
     }

      else if(turno==2)
    {
        pxh=135;
    }
    else if (turno==3)

{
    pxh=145;
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
cout<<"pago bruto"<<pb<<"\n";
cout<<"seguro social"<<ihss<<"\n";
cout<<"total a pagar"<<tp<<"\n";
cout<<"Horas Extra"<<horasx<<"\n";

    return 0;
}
