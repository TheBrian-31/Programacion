#include<iostream>
#include <cmath>
void fun2 ();
using namespace std;
int main()
{
    int n;
    cout << "PROGRAMA PARA REALIZAR CALCULO DE SALARIOS DE LA EMPRESA 'THE BIGGEST COMPANY'." <<endl;
    cout << "Ingrese el numero de empleados de los que desea calcular su salario:";
    cin >>n;
    for(int i=0;i<n;i++)
    {
        fun2();/*Se llama la fun2 que se creo*/
    }
    cout<< endl <<"Final de los calculos de salario";
}
void fun2()/*Se crea fun1 pra no sobre cargar main*/
{
    int horas, extras;
    float total, real;
    cout <<"Ingrese las horas trabajadas del empleado:";
    cin>> horas;
    cout <<"Ingrese las horas extras realizadas por el empleado:";
    cin>> extras;
    total= float(horas*(1.75))+(extras*(2.50));/*Se calcula los descuentos*/
    real= total-(total*0.1025);/*Se hacen los descuendo en los salarios*/
    if(total>500)
    {
        real= real-(total*0.1);/*Se hacen los descuentos por mayores a 500*/
    }
    cout<< "El sueldo total del empleado es: $" <<total <<endl;
    cout<< "El sueldo real del empleado es: $" <<real <<endl;
}