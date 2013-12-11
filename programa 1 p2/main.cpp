#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
ingresar el nombre,notaa,notae usando un procedimiento luegos determinar la nota final,
y la observacion usando un procedimiento,
 presentar los datos usando otro procedimiento
*/

char nombre[30];
char obs[15];
int na, ne,nf;


void ingreso (char nombre[],int &na,int &ne)
{
    cout<<"ingresar el nombre del alumno...:";
    cin.getline(nombre,30);
    cout<<"ingresar la nota examen";
    cin>> ne;
    cout<<"ingresar la nota final";
    cin>>na;
}
void calcular(int na,int ne,int &nf, char obs[])

{
    nf=na+ne;

    if(nf>=60)
        strcpy(obs,"aprobado");
    else
        strcpy(obs,"reprobado");
}

void presentar(int nf, char obs [])
{
    cout<<"Nota final del alumno :"<<nf<<"\n";
    cout<<"observacion :"<<obs<<"\n";
}
int main()
{
   ingreso(nombre,na,ne);
   calcular(na,ne,nf,obs);
   presentar(nf,obs);
    return 0;
}
