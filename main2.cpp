#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

#define N 8

void unidades(char num[N],int x){
     switch(num[x]){
         case '0':
             cout<<"cero"<<" ";
             break;
         case '1':
             cout<<"uno"<<" ";
             break;
         case '2':
             cout<<"dos"<<" ";
             break;
         case '3':
             cout<<"tres"<<" ";
             break;
         case '4':
             cout<<"cuatro"<<" ";
             break;
         case '5':
             cout<<"cinco"<<" ";
             break;
         case '6':
             cout<<"seis"<<" ";
             break;
         case '7':
             cout<<"siete"<<" ";
             break;
         case '8':
             cout<<"ocho"<<" ";
             break;
         case '9':
             cout<<"nueve"<<" ";
             break;
    }
}
        void unidades2(char num[N],int x){
         switch(num[x]){//UNIDADES
         case '1':
             cout<<"once"<<" ";
             break;
         case '2':
             cout<<"doce"<<" ";
             break;
         case '3':
             cout<<"trece"<<" ";
             break;
         case '4':
             cout<<"catorce"<<" ";
             break;
         case '5':
             cout<<"quince"<<" ";
             break;
         case '6':
             cout<<"dieciseis"<<" ";
             break;
         case '7':
             cout<<"diecisiete"<<" ";
             break;
         case '8':
             cout<<"dieciocho"<<" ";
             break;
         case '9':
             cout<<"diecinueve"<<" ";
             break;
        }
    }

bool decenas(char num[N],int x){
    bool r=true;
    switch(num[x]){//DECENAS
        case '1':
            if(num[x+1]!='0'){
                unidades2(num,x+1);
                r=false;
            }
            else
                cout<<"diez"<<" ";
            break;
        case '2':
            cout<<"veinte";
            if(num[x+1]!='0')
                cout<<" y"<<" ";
            break;
        case '3':
            cout<<"treinta";
            if(num[x+1]!='0')
                cout<<" y"<<" ";
            break;
        case '4':
            cout<<"cuarenta";
            if(num[x+1]!='0')
                cout<<" y"<<" ";
            break;
         case '5':
             cout<<"cincuenta";
             if(num[x+1]!='0')
                cout<<" y"<<" ";
             break;
         case '6':
             cout<<"sesenta";
             if(num[x+1]!='0')
                cout<<" y"<<" ";
             break;
         case '7':
             cout<<"setenta";
             if(num[x+1]!='0')
                cout<<" y"<<" ";
             break;
         case '8':
             cout<<"ochenta";
             if(num[x+1]!='0')
                cout<<" y"<<" ";
             break;
         case '9':
             cout<<"noventa";
             if(num[x+1]!='0')
                cout<<" y"<<" ";
             break;
    }
    return r;
}
void centenas(char num[N],int x){
    switch(num[x]){
        case '1':
            (num[x+2]!='0')?cout<<"ciento"<<" ":cout<<"cien"<<" ";
            break;
        case '2':
            cout<<"doscientos"<<" ";
            break;
        case '3':
            cout<<"trescientos"<<" ";
            break;
        case '4':
            cout<<"cuatrocientos"<<" ";
            break;
        case '5':
            cout<<"quinientos"<<" ";
            break;
        case '6':
            cout<<"seiscientos"<<" ";
            break;
        case '7':
            cout<<"setecientos"<<" ";
            break;
        case '8':
            cout<<"ochocientos"<<" ";
            break;
        case '9':
            cout<<"novecientos"<<" ";
            break;
    }
}

void miles(char num[N],int x){
    switch(num[x]){
        case '1':
            cout<<"mil"<<" ";
            break;
        case '2':
            cout<<"dos mil"<<" ";
            break;
        case '3':
            cout<<"tres mil"<<" ";
            break;
        case '4':
            cout<<"cuatro mil"<<" ";
            break;
        case '5':
            cout<<"cinco mil"<<" ";
            break;
        case '6':
            cout<<"seis mil"<<" ";
            break;
        case '7':
            cout<<"siete mil"<<" ";
            break;
        case '8':
            cout<<"ocho mil"<<" ";
            break;
        case '9':
            cout<<"nueve mil"<<" ";
            break;
    }
}

bool dec_miles(char num[N],int x){
    bool r=true;
    switch(num[x]){
        case '1':
            if(num[x+1]!='0'){
                unidades2(num,x+1);
                r=false;
                cout << "mil ";
            }
            else
                cout << "diez mil"<<" ";
            break;
        case '2':
            cout << "veinte";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '3':
            cout << "treinta";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '4':
            cout << "cuarenta";
            if(num[x+1]!='0')
                cout << " y"<<" ";
            else
                cout << " mil ";
            break;
        case '5':
            cout << "cincuenta";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '6':
            cout << "sesenta";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '7':
            cout << "setenta";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '8':
            cout << "ochenta";
            if(num[x+1]!='0')
                cout << " y" << " ";
            else
                cout << " mil ";
            break;
        case '9':
            cout << "noventa";
            if(num[x+1]!='0')
                    cout << " y" << " ";
            else
                cout<<" mil ";
            break;
    }
    return r;
}

void cent_dmiles(char num[N],int x){
    centenas(num,x);
}

void millones(char num[N],int x){
    switch(num[x]){
        case '1':
            cout << "un millon";
            break;
        default:
            if(num[x]!='0'){
                unidades(num,x);
            if(num[x-1]!='0')
                cout << " millones ";
            }
            break;
        }
}

int main(){

    char num[N];
    bool b,a;
    int x,y=-1,i;

    cout<<"\nIngrese el numero: ";
    cin.getline(num,N);
    x = strlen(num);//se le asigna la longitud del numero

    cout << endl;

    while(x>=1){
        y++;
        switch(x){
        case 1:
            if(a==true && b==true){
                unidades(num,y);
            if(num[0]=='0')
                x=1;
            }
            break;
        case 2:
            b = decenas(num,y);
            if(num[y+1]=='0')
                x=1;
                break;
        case 3:
            centenas(num,y);
            break;
        case 4:
            if(b==true)
                miles(num,y);
            break;
        case 5:
            b=dec_miles(num,y);
            break;
        case 6:
            cent_dmiles(num,y);
            break;
        case 7:
            millones(num,y);
            break;
        case 8:
            cout << "maximo numero permitido: 9,999,999";
            x=1;break;
        }
        --x;
    }
}



