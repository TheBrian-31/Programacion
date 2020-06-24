#include <iostream>
using namespace std;
int main(void){
    int numerosimpares[100], i, j;
    string a;
    cout<<"PROGRAMA QUE MUESTRA LOS CIEN PRIMEROS NUMEROS IMPARES." <<endl <<endl;
    cout<<"Desea conocer los cien primeros numeros impares?" <<endl;
    cout<<"Escriba 'si' o 'no':" <<endl;
    cin>>a;cout<<endl;/*Se pide al usuario si desea conocer los primeros cien numeros impares, si no 
    desea hacerlo el progrma finalizara*/
    if(a=="si"){
    cout<<"Los cien primeros numeros impares son:" <<endl;
    for(int i = 0; i <100; i++)
    {
        numerosimpares[i]=(2*(i)+1);/*Se guardan los primeros cien numeros enteros impares en el arreglo*/
    }
    for(int j = 99; j>=0; j--)
    {
        cout<<numerosimpares[j] << " " <<endl;/*Se muestra el arreglo de manera descendente*/
    }}else{
    if(a=="no"){
        cout<<"El progrma a finalizado.";
    }else
    {
        cout<<"Error de digitacion."<<endl <<"El progrma a finalizado.";
    }
    }
}