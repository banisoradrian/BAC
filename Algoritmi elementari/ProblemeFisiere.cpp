#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
/*
  1. Suma a doua numere din fisier , suma fiind scrisa in alt fisier
  ifstream f("d:\\txt1.txt");
  ofstream g("d:\\txxt.txt");
  int a , b, s;
     f >> a >> b;
     f.close();
     s = a + b;
     cout<<"a = "<<a<<"b = "<<b<<"suma = "<<s;
     g << s;
     g.close();
*/

/*
 2. Interschimbarea a doua valori si scrierea lor tot in acelasi fisier
 ifstream f("d:\\FisiereCPP\\exxx.txt");
 int a , b;
  f >> a >> b;
  cout<<"Valoarea veche: "<<" a = "<<a<<" b = "<<b<<endl;
  swap(a , b);
  cout<<"Valoarea noua: "<<" a = "<<a<<" b = "<<b<<endl;
  ofstream g("d:\\FisiereCPP\\exxx.txt");
  g << a << " " << b;
  g.close();
  */

/*
3.
ifstream f("d:\\FisiereCPP\\exx.txt");
ofstream g("d:\\FisiereCPP\\exxout.txt");
int a , b , s = 0 , d = 0;
f >> a >> b;
if(a < b)
{
  s = a + b;
  cout << s;
  g << s;
}
else
{
  d = a - b;
  cout<< d;
  g << d;
}
f.close();
g.close();
*/

/*
4.Media
ifstream f("d:\\FisiereCPP\\note.txt");
ofstream g("d:\\FisiereCPP\\media.txt");
int a , b , c , d ;
f >> a >> b >> c >> d;

  cout <<(float)(a + b + c + d) / 4;
  g <<(float)(a + b + c + d) / 4;
f.close();
g.close();
*/

/*
5.
ifstream f("d:\\FisiereCPP\\numerein.txt");
ofstream g("d:\\FisiereCPP\\numereout.txt");
int a , b , ultima_cifra = 0 , penultima_cifra = 0 , p1 , p2 ;
f >> a >> b ;
p1 = a * b;
cout<<"a * b = "<<p1<<endl;
ultima_cifra = p1 % 10;

p2 = p1 / 10;
penultima_cifra = p2 % 10;

cout<<"Ultimele doua numere"<<penultima_cifra<<ultima_cifra<<endl;
f.close();
g.close();
*/

/*6.
Numere pitagorice
int a,b,c;
ifstream f("d:\\FisiereCPP\\pitagorain.txt");
ofstream g("d:\\FisiereCPP\\pitagoraout.txt");
f>>a;
f>>b;
f>>c;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
   g<<"Cele 3 numere: "<<a<<", "<<b<<", "<<c<<" sunt pitagorice "<<endl;
else
   g<<"Cele 3 numere: "<<a<<", "<<b<<", "<<c<<" sunt pitagorice "<<endl;
f.close();
g.close();
*/

//8.
int n , a ,b ;
ifstream f("d:\\FisiereCPP\\numereein.txt");
ofstream g("d:\\FisiereCPP\\numereeout.txt");
f >> a >> b;
cout<<"Introduceti valoarea lui n:" ; cin >> n;
cout<<"Intervalul este ["<<a<<","<<b<<"]"<<endl;
if(n >= a && n <= b)
  cout<<"Numarul n apartine intervalului ["<<a<<","<<b<<"]";
else
  cout<<"Numarul n  nu  apartine intervalului ["<<a<<","<<b<<"]";

return 0;

     return 0;
}
