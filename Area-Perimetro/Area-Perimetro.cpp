#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    float a, b, c;

    cout << "Programa para encontrar el area y perimetro de un circulo." << endl <<endl;
    cout << "Por favor ingresar el radio del circulo:" << endl;
    cin>> a;/*El usuario ingresarael radio del circulo*/
    cout << "El area del circulo es:" << endl;
    b= float (pow(a,2))*3.1416;
    cout << b <<endl;
    cout << "El perimetro del circulo es:" << endl;
    c= float (2*3.1416*a);
    cout<< c;

    return (0);
}