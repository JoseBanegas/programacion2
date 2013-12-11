#include <iostream>

using namespace std;
/*
se tiene que ingresar la nota del alumno el y el programa debera de presentar la observacion usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente
usar condicione donde apliquemos el and
*/
int main()
{
    char nombre[30];
    int na ;


    cout << "ingresar el nombre del alumno....>";
    cin.getline(nombre,30);

    cout<<"ingresar nota de alumno....>";
    cin >> na;

    if ((na>=1) and (na<=59))
    {
        cout <<"reprobado...>";
    }

   else if  ((na>=60) and (na<=80))
    {
        cout<<"bueno...>";

    }
    else if ((na>=81) and (na<=90))
    {
        cout<<"muy bueno...>";
    }
    else
    {
        cout<<"sobresaliente....>";
    }
    return 0;
}
