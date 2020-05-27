#include <iostream>
#include <string.h>
#include <string>
#include <cmath>

using namespace std;
int main(void)
{
    string Palabra;
    int Longuitud;
    int Par;
    cout <<"PROGRAMA PARA SABER SI LA PALABRA INGRESADA ES MAYOR A DIEZ CARACTERES"<<endl;
    cout <<"Y SI LA PALABRA INGRESADA TIENE UNA LONGUITUD PAR O IMPAR" <<endl <<endl;
    cout << "Ingrese una palabra:" <<endl;
    cin >> Palabra;
    cout <<endl;
    Longuitud= (Palabra.length());/*Se calcula la longuitud de la palabra partiendo de cuantos caracteres posee*/
    if (Longuitud>10)
    {
        cout << "La palabra " <<Palabra <<", efectivamente posee mas de diez caracteres." <<endl <<endl;
    }
    else
    {
        cout <<"La palabra " <<Palabra <<", posee menos de diez caracteres." <<endl <<endl;
    }
    Par= Longuitud%2;
    if ( Par == 0 )
    {
        cout <<"La palabra " <<Palabra <<", posee una longuitud PAR." <<endl <<endl;
    }
    else
    {
        cout <<"La palabra " <<Palabra <<", posee una longuitud IMPAR." <<endl <<endl;
    }
}