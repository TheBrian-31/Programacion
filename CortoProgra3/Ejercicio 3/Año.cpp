#include <iostream>
#include <cmath>
using namespace std;
int fun1(int b);
int main(void)
{
    char(164);
    int x;
    cout<< "Programa para saber si un A\244o es Bisiesto o no." <<endl <<endl;
    cout<< "Ingrese el a\244o que desea saber si es bisiesto." <<endl;
    cin >> x;
    cout<< "El a\244o " <<x <<": ";
    fun1(x);/*Se ejecuta fun1*/
}
int fun1 (int b)/*Se crea fun1 pra no sobre cargar main*/
{
    int a, i, o;
    a=b%400;/*Se saca el residuo de dividir entre 400*/
    o=b%4;/*Se saca el residuo de dividir entre 4*/
    i=b%100;/*Se saca el resto de dividir entre 100*/
   if(a==0)/*Si el residuo de a es cero entoces sera bisiesto*/
   {
       cout<< "SI ES BISIESTO";
   }
   if(i!=0)/*Si el residuo de i no es cero y el residuo de o es cero, entoces sera bisiesto*/
       {
        switch (o)
        {
        case 0:
        cout<< "SI ES BISIESTO";
        break;
        
        default:
        cout<< "NO ES BISIESTO";/*Ya que nada de lo anterior se cumple no es bisiesto*/
            break;
        }
       }
}