#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    double a, b ,c, x1, x2;

    cout << "Programa para conocer el valor de x mediante la formula cuadratica." << endl <<endl;
    cout << "Por favor ingresar el valor de las variables a, b y c encontradas en la formula ax^2+bx+c=0:" << endl;
    cout << "Ingrese el valor de a:" << endl;
    cin >> a ;/* El usuario debera ingresar la variable a para que trabaje el programa*/
    cout << "Ingrese el valor de b:" << endl;
    cin >> b ;/* El usuario debera ingresar la variable b para que trabaje el programa*/
    cout << "Ingrese el valor de c:" << endl;
    cin >> c ;/* El usuario debera ingresar la variable c para que trabaje el programa*/

    x1= (-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2= (-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout << "El valor de x1 es:" << endl;
    cout << x1 << endl;
    cout << "El valor de x2 es:" << endl;
    cout << x2;

    return (0);
}