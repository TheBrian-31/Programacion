#include <iostream>
#include <cmath>
bool funbisiesto(int b);
bool funpar(int d);
int funmostrar(int h,int m,int s);
using namespace std;
int main()
{
    int dd, mm, aa;
    bool f, x;
    cout<<"PROGRAMA QUE AGREGAR UN DIA A LA FECHA INGRESADA" <<endl <<endl;
    cout<<"Por favor ingrese la fecha (dd/mm/aa):" <<endl;
    cout<<"Ingrese el a\244o (sus ultimos dos digitos):" <<endl;/*Se pide el año*/
    cin>>aa;
    while(aa<0 || aa>100)
    {
    cout<<"Error, ingrese correctamente el a\244o (sus ultimos dos digitos):" <<endl;
    cin>>aa;
    }
    cout<<"Ingrese el mes (mm):" <<endl;/*Se pide el mes*/
    cin>>mm;
    while(mm<1 || mm>13)
    {
    cout<<"Error, ingrese correctamente el mes (mm):" <<endl;
    cin>>mm;
    }
    x=funpar(mm);
    f= funbisiesto(aa);
    if(f==false)
    {
        if(mm<8)
        {
            if(mm==2){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>28)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=29){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
            }else{
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=31){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=32){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
                }
        }
        if(mm>8){
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=32){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=31){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
        }
    }
        if(f==true)
    {
        if(mm<8)
        {
            if(mm==2){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>29)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=30){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
            }else{
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=31){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=32){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
                }
        }
        if(mm>8){
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=32){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;/*Se pide el dia*/
                cin>>dd;
                while(dd<1 || dd>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dd;}
        dd=dd+1;
        if(dd>=31){
        dd=1;
        mm=mm+1;
        if(mm>=13)
        {
        mm=1;
        aa=aa+1;
        if(aa>=100)
        {aa=0;}
        }}
                }
        }
    }
    cout<<"La fecha mas un dia es: ";
    funmostrar(dd, mm, aa);
}
int funmostrar(int h,int m,int s)
{
    if(h<10) {cout <<0;}
    cout<<h;
    cout<<"/" ;
    if(m<10) {cout <<0;}
    cout<<m; 
    cout<<"/";
    if(s<10) {cout <<0;}
    cout<<s;
}
bool funbisiesto(int b)/*Se crea fun1 para no sobre cargar main*/
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
    return (1);/*La funcion retornara un valor booleano*/
}
bool funpar(int d)
{
    int a;
    a=d%2;
    if(a=0){
        return true;
    }else{
        return false;
    }
    return (1);
}