#include <iostream>

using namespace std;

int sueldo,ihss;
int seguro_social(int sueldo)

{
    int ihss;
    if (sueldo>7000)

    {
        ihss=245;

    }

    else
    {
        ihss=0.035*sueldo;

    }
    return ihss;
}
int main()
{
    cout << "Ingresar su sueldo" << endl;
    cin>>sueldo;
    ihss=seguro_social(sueldo);
    cout<<"seguro social.....:"<<ihss<<"\n";
    return 0;
}
