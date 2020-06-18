#include <iostream>
#include <cmath>
int fun1(int h,int m,int s);
using namespace std;
int main()
{
    int hora, min, seg;
    cout<<"PROGRAMA DE HORA MAS UN SEGUNDO" <<endl;
    cout<<"Este programa es en modo 24 horas (hh:mm:ss)."<<endl;
    cout<<"Ingrese las horas(hh):" <<endl;
    cin>>hora;
    while(hora<0 || hora>23)
    {
    cout<<"Error, ingrese correctamente las horas(hh):" <<endl;
    cin>>hora;
    }
    cout<<"Ingrese los minutos(mm):" <<endl;
    cin>>min;
    while(min<0 || min>59)
    {
    cout<<"Error, ingrese correctamente los minutos(mm):" <<endl;
    cin>>min;
    }
    cout<<"Ingrese los segundos(ss):" <<endl;
    cin>>seg;
    while(seg<0 || seg>59)
    {
    cout<<"Error, ingrese correctamente los segundos(ss):" <<endl;
    cin>>seg;
    }
    seg=seg+1;
    if(seg >= 60)
    {
        seg=0;
        min=min+1;
        if(min>=60)
        {
            min=0;
            hora=hora+1;
            if(hora>=24)
            {hora=0;}
        }
    }
    cout<<"La hora agregandole un segundo es: ";
    fun1(hora, min, seg);
}
int fun1(int h,int m,int s)
{
    if(h<10) {cout <<0;}
    cout<<h;
    cout<<":" ;
    if(m<10) {cout <<0;}
    cout<<m; 
    cout<<":";
    if(s<10) {cout <<0;}
    cout<<s;
}