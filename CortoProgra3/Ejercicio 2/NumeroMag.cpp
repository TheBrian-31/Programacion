/*Lastimosamente estube enfermo desde jueves al sabado a medio por infecion en los riñones, por lo que no pude
hacer este programa.Asi que me conformo con la nota de los dos programitas anteriores :)
Me alegra haberlo intentado*/
#include <iostream>
#include <cmath>
using namespace std;
void fun1();
int main(void)
{
cout <<'ADIVINA EL NUMERO' <<endl;
cout <<"Diviertete jugando a adivinar el numero misterioso" <<endl;
fun1();
}
void fun1()
{
    int a;
    do{
        cout << "Escriba '1' para adivinar el numero" <<endl;
        cout << "Escriba '2' para salir" <<endl;
        cin>>a; cout<<endl;
    }
    while(a!=2);
}