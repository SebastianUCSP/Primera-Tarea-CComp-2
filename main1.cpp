#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
int month, year, semana, modulo_month, dias_febrero, days_month;


cout << "Ingrese el month: (ENTRE 1 Y 12)";
cin >> month;

if(month < 1){
    cout << "no puede ser negativo o 0";
    return 0;
}
if(month > 12){
    cout << "no puede ser mayor de 12";
    return 0;
}

cout << "Ingrese el year: ";
cin >> year;

if(year < 0){
    cout << "no puede ser negativo";
    return 0;
}

cout << "Calendario: ";

//Bisiesto.

if (((year%4==0) && (year%100!=0)) || year%400==0)
  dias_febrero=29;
else
  dias_febrero=28;


switch (month)
{
    case 4:
    case 6:
    case 9:
    case 11:
        days_month=30;
    break;

    case 2:
        days_month = dias_febrero;
    break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days_month=31;
    break;
}

switch (month)
{
    case 1:
        cout << "\t\tENERO\t" << year;
        break;
    case 2:
        cout << "\t\tFEBRERO\t" << year;
        break;
    case 3:
        cout << "\t\tMARZO\t" << year;
        break;
    case 4:
        cout << "\t\tABRIL\t" << year;
        break;
    case 5:
        cout << "\t\tMAYO\t" << year;
        break;
    case 6:
        cout << "\t\tJUNIO\t" << year;
        break;
    case 7:
        cout << "\t\tJULIO\t" << year;
        break;
    case 8:
        cout << "\t\tAGOSTO\t" << year;
        break;
    case 9:
        cout << "\t\tSETIEMBRE\t" << year;
        break;
    case 10:
        cout << "\t\tOCTUBRE\t" << year;
        break;
    case 11:
        cout << "\t\tNOVIEMBRE\t" << year;
        break;
    case 12:
        cout << "\t\tDICIEMBRE\t" << year;
        break;
}

if (dias_febrero == 29)
{
	switch (month)
	{
		case 1:
		    modulo_month=0;
		    break;
		case 2:
		    modulo_month=3;
		    break;
		case 3:
		    modulo_month=4;
		    break;
		case 4:
		    modulo_month=0;
		    break;
		case 5:
		    modulo_month=2;
		    break;
		case 6:
		    modulo_month=5;
		    break;
		case 7:
		    modulo_month=0;
		    break;
		case 8:
		    modulo_month=3;
		    break;
		case 9:
		    modulo_month=6;
		    break;
		case 10:
		    modulo_month=1;
		    break;
		case 11:
		    modulo_month=4;
		    break;
		case 12:
		    modulo_month=6;
		    break;
	}

}
else
{
	switch (month)
	{
		case 1:
		    modulo_month=0;
		    break;
		case 2:
		    modulo_month=3;
		    break;
		case 3:
		    modulo_month=3;
		    break;
		case 4:
		    modulo_month=6;
		    break;
		case 5:
		    modulo_month=1;
		    break;
		case 6:
		    modulo_month=4;
		    break;
		case 7:
		    modulo_month=6;
		    break;
		case 8:
		    modulo_month=2;
		    break;
		case 9:
		    modulo_month=5;
		    break;
		case 10:
		    modulo_month=0;
		    break;
		case 11:
		    modulo_month=3;
		    break;
		case 12:
		    modulo_month=5;
		    break;
	}
}

//Congruencia de Zeller

semana=((year-1)%7+ ((year-1)/4 -(3*((year-1)/100+1)/4))%7+modulo_month+1%7)%7;


cout << "\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n";

    for(int m = 0; m < semana-1; m++)
        cout << "\t";

    for(int i = 1; i <= days_month; i++){
        //cada vez que pasa una semana cambiamos de linea
        if(i == 8-semana||i == 15-semana||i == 22-semana||i == 29-semana || i == 36-semana)
            cout << "\n" << i;
        else
            cout << "\t" << i;
    }
}

