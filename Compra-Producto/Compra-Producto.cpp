#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a;
    double b;
    double c;
    float x;
    cout << "Resivo de compra de producto." << endl;
    cout << "Por favor ingrese una clase producto que desee comprar:" << endl <<endl;

    cout << "Ingrese el nomdre del producto:" << endl;
    cin>> a;/*El usuario debera ingresar el nombre del producto*/

    cout << "Ingrese la cantidad que desea comprar:" << endl;
    cin>> b;/*El usuario debera ingresar la cantidad que desea de este producto de producto*/

    cout << "Ingrese el precio por unidad del producto:" << endl;
    cout << "$"; cin>> c;/*El usuario debera ingresar precio unitario del producto*/
    
    cout <<endl;
    x= float (b*c);
    cout << "Producto " <<a <<" cantidad " << b <<" precio por unidad " <<c << endl;
    cout << "Costo total: $" <<x <<endl;

    return (0);
}