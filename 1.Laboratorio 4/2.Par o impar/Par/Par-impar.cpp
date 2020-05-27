#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int b;
    cout <<"VERIFICADOR SI UN NUMERO ES PAR O IMPAR." <<endl <<endl;
    cout <<"Ingrese el numero entero que desea saber si es par o impar:" <<endl;
    cin >> a;
    cout <<endl;
    b= ( a%2 );/*Se obtiene el resto de una division entre dos para saber si se podra dividir*/
    if( b == 0 )/*Si y solo si es igual a cero sera par*/
    {
        cout <<"El numero " <<a <<" es PAR.";
    }
    else
    {
        cout <<"El numero " <<a <<" es IMPAR.";
    }
    return (0);
}