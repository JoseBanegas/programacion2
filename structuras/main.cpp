#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;
struct alumno
{
    char nombre[30];
    int na, ne ,nf;
    char obs[15];
};

alumno alumx;
void ingreso (alumno &alumx)
{
    cout<<"ingresar nombre del alumno...:";
    cin.getline(alumx.nombre,30);
    cout<<"Nota acumulada...:";
    cin>>alumx.na;
    cout<<"nota examen...:";
    cin>>alumx.ne;
}
     void calcular (alumno &alumx)
{
    alumx.nf=alumx.na + alumx.ne;
    if(alumx.nf>=60)
    {
        strcpy(alumx.obs,"aprobado");
    }
    else
    {
        strcpy(alumx.obs,"reprobado");

    }

}void presentar (alumno alumx)
{
    cout<<"el alumno"<<alumx.nombre<<"tiene de promedio"<<alumx.nf<<"y esta"<<alumx.obs<<"\n";

}



int main()
{
    ingreso (alumx);
    calcular(alumx);
    presentar(alumx);
    return 0;
}
