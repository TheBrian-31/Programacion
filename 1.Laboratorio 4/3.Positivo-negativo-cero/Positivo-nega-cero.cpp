#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    float a;
    cout << "PROGRAMA PARA SABER SI UN NUMERO ES POSITIVO, NEGATIVO O CERO." <<endl <<endl;
    cout << "Ingrese un numero para saber si es positivo, negativo o cero:" <<endl;
    cin >> a;
    cout <<endl;
    if ( a == 0 )
    {
        cout << "El numero " <<a <<" es CERO.";
    }
    else
    {
        if( a > 0)
        {
            cout << "El numero " <<a <<" es Positivo";
        }
        else
        {
            cout << "El numero " <<a <<" es Negativo";
        }
    }
    return (0);
}