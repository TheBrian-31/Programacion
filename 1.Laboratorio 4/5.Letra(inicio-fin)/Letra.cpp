#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string a;
    string b,c;
    int ultima, x;
    cout << "PROGRAMA PARA SABER SI LA PRIMERA LETRA DE UNA PALABRA ES IGUAL A LA ULTIMA." <<endl <<endl;
    cout << "Ingrese una palabra>" <<endl <<"(escribir solamente en mayusculas o solamente en minusculas)" <<endl <<endl;
    /*se debe pedir que sea mayuscula o minuscula, ya que al comparar las letras estas son diferentes 
    si la primera se escribe en mayucula y la ultima en minuscula*/
    cin >>a;
    cout <<endl;
    ultima = (a).length();/*Se saca el numero de la ultima letra a partir de saber que cantidad de 
    caracteres tiene la palabra*/
    x=(ultima-1);
    c= a.substr(0,1);
    b= a.substr(x,ultima);
    if (c==b)
    {
        cout <<"La primera letra '" <<c <<"' SI es igual a la ultima letra '" <<b <<"'.";
    }
    else
    {
        cout <<"La primera letra '" <<c <<"' NO es igual a la ultima letra '" <<b <<"'.";
    }
}