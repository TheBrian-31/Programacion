#include <iostream>
using namespace std;
void llenarArreglo(int [ ], int);
int main(void)
{
    int arreglo[250],n, x, suma=0;
    cout<< "PROGRAMA PARA VER CUANTAS VECES SE REPITE UN NUMERO ENTERO EN UN ARREGLO:" <<endl <<endl;
    cout<< "Ingrese la cantidad de elementos que desea ingresar a su arreglo (Existe un maximo de 250):" <<endl;
    cin>>n;
    llenarArreglo(arreglo, n);
    cout<<"Ingrese el numero entero que desea saber cuantas veces se repite en el arreglo ingresado:" <<endl;
    cin>>x;
    for (int i = 0; i < n; i++) 
  {
    int elementoActual = arreglo[i];/*Se le asigna el numero existente en el arreglo a la variable*/
    if (elementoActual == x){/*Se compara cada uno de los elementos del arreglo para ver si es igual a el numero ingresado*/
        suma=suma+1;
    }
  }
    cout<<"El numero '"<<x <<"' se repite la cantidad de '"<<suma <<"' veces en el arreglo." <<endl;
    return 0;
}
void llenarArreglo(int x[ ], int n)/*Se crea una funsion para que se llene el arreglo*/
{
int i;
cout<<"Ingrese los elementos que perteneceran al arreglo:" <<endl;
for(i = 0; i < n; i++)
cin >> x[i];
}