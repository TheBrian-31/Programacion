#include <iostream>
#include <cmath>
using namespace std;
int fun1(int a, int b);
int main(void)
{
    int mayor, menor;
    cout<<"PROGRAMA PARA CONOCER EL MCD DE DOS NUMEROS ENTEROS." <<endl;
    cout<< "Digite el numero mayor:" <<endl;
    cin>> mayor; cout<<endl;
    cout<< "Digite el numero menor:" <<endl;
    cin>> menor; cout<<endl;
    fun1( mayor, menor);

    cout<< "Fin del programa.";
}

int fun1(int a, int b)
{
    int residuo;
    do
    {
        residuo = a % b;
        if(residuo!=0)
        {
            a = b;
            b = residuo;
        }
    } while (residuo != 0);
    cout << "EL MCD es: " << b;
    cout << endl;
    return (1);
}