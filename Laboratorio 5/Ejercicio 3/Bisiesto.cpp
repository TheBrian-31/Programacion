#include <iostream>
#include <cmath>
using namespace std;
bool fun1(int b);
int main(void)
{
    char(164);
    int x;
    bool c;
    cout<< "Programa para saber si un A\244o es Bisiesto o no." <<endl <<endl;
    cout<< "Ingrese el a\244o que desea saber si es bisiesto." <<endl;
    cin >> x;
    cout<< "El a\244o " <<x <<": ";
    c=fun1(x);/*Se ejecuta fun1 y se le asigna el valor booleano a la variable c*/
    if(c==true)
    {
        cout<<"Si es BISIESTO";
    }
    if(c==false)
    {
        cout<<"NO es BISIESTO";
    }
}
bool fun1(int b)/*Se crea fun1 para no sobre cargar main*/
{
    int a, i, o;
    a=b%400;/*Se saca el residuo de dividir entre 400*/
    o=b%4;/*Se saca el residuo de dividir entre 4*/
    i=b%100;/*Se saca el resto de dividir entre 100*/
   if(a==0)/*Si el residuo de a es cero entoces sera bisiesto*/
   {
      return true;/*Devuelve verdadero*/
   }
   if(i!=0)/*Si el residuo de i no es cero y el residuo de o es cero, entoces sera bisiesto*/
       {
        switch (o)
        {
        case 0:
        return true;/*Devuelve verdadero*/
        break;
        
        default:
        return false;/*Devuelve falso*/
            break;
        }
       }
    return (1);
}