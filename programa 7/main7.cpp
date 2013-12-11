#include <iostream>

using namespace std;

/*ingresar el nombre del alumno la nota acumulada y examen y determinar la nota final. sila nota esta entre 57-60 colocar 60.
*/
int main()
{
    char nombre [30];
    int na, ne,nf;
    cout <<"nombre del alumno...>";
    cin.getline(nombre,30);

    cout <<"nota acumulada...>" ;
    cin>> na;

    cout<< "nota examen...>";
    cin>> ne;

    nf=na+ne;

    if((nf>=57)and (nf<60))
    {
        nf=60;
    }
    cout<<"nota final es....."<<nf<<"\n";

    return 0;
}
