#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int d;
    int x;
    cout << endl;
    cout << "DETERMINAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO." << endl <<endl;
    cout << "Digite el numero que desea saber si es divisible (dividendo): " << endl;
    cin >> n;
    cout << endl;
    cout << "Digite el numero por el cual quiere saber si se puede dividir (divisor): " << endl;
    cin >> d;
    cout << endl;
    x =( n%d );/*Se obtiene el resto para poder ver si es divisible*/
    if(x == 0)/*Si y solo si es igual a cero seran divisibles*/
    {
    cout << "El numero " << n << ", SI es divisible entre " <<d <<"." << endl;
    }else
    {
    cout << "El numero " << n << ", NO es divisible entre " <<d <<"." << endl;
    }
    cout << endl;
    return (0);
}