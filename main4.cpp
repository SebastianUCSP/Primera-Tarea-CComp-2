#include<iostream>
using namespace std;
int main(){
   double x;
   int y;
   cout<<"ingrese el valor: ";
   cin>>x;

   y = x*100;
   cout << "Necesitaremos " << y/20000 << " de 200 soles" << endl;
   y = y % 20000;
   cout << "Necesitaremos " << y/10000 << " de 100 soles" << endl;
   y = y % 10000;
   cout << "Necesitaremos " << y/5000 << " de 50 soles" << endl;
   y = y % 5000;
   cout << "Necesitaremos " << y/2000 << " de 20 soles" << endl;
   y = y % 2000;
   cout << "Necesitaremos " << y/1000 << " de 10 soles" << endl;
   y = y % 1000;
   cout << "Necesitaremos " << y/500 << " de 5 soles" << endl;
   y = y % 500;
   cout << "Necesitaremos " << y/200 << " de 2 soles" << endl;
   y = y % 200;
   cout << "Necesitaremos " << y/100 << " de 1 soles" << endl;
   y = y % 100;
   cout << "Necesitaremos " << y/50 << " de 50 centimos" << endl;
   y = y % 50;
   cout << "Necesitaremos " << y/20 << " de 20 centimos" << endl;
   y = y % 20;
   cout << "Necesitaremos " << y/20 << " de 10 centimos" << endl;
   y = y % 10;

   return 0;
}
