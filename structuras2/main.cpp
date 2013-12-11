#include <iostream>

using namespace std;


/*elaborar un programa donde se declara la siguiente estructura nombre,horas,hn,he,pn,pe,pb,ihss y tp.
se tiene que elaborar un procedimiento para ingresar los datos al registro, luego debemos de calcular las ,hn,he,pn,pe,pb,ihss y tp
un procediemiento .( las horas normales son las primeras 40 y las demas extras)

se tiene que elaborar una funcion para determinar el seguro social donde solo se ingrese el pago bruto que esparte de la estructura y nos devuelva el ihss .

emplex.ihss=seguro(emplex.pb)
luego presentar los datos usando un procedimiento.



*/

int seguro (int pb)
{
    if (pb>7000)
        return 245;

    else
        return 0.035*pb;



}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
