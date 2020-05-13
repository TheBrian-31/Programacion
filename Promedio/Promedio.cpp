#include <iostream>
using namespace std;
int main(void)
{
    int a;
    int b;
    int c;
    float x;
    cout << "Programa para conocer el promedio de tres numeros enteros." << endl <<endl;
    cout << "Por favor ingrese tres numeros enteros de los cuales desea conocer su promedio" << endl << endl;

    cout << "Ingrese el primer numero:" << endl;
    cin>> a;/*El usuario debera ingresar un numero entero*/

    cout << "Ingrese el segundo numero" << endl;
    cin>> b;/*El usuario debera ingresar un numero entero*/

    cout << "Ingrese el tercer numero" << endl;
    cin>> c;/*El usuario debera ingresar un numero entero*/

    x= float (a+b+c)/3;
    cout << "El promedio es" << endl;
    cout <<x;/*El usuario obtendra el promedio*/

    return (0);
}