#include <iostream>
#include <cmath>
using namespace std;
/*

bool ePrim(int numar) // Functia returneaza doar true sau false - pentru ca nu avem nevoie de alte valori
{
    if(numar < 2) // Daca numarul este mai mic ca si 2 (1, 0, -1, -2, etc) - acesta nu este prim
        return false;
    if(numar == 2) // Daca numarul este 2, acesta este prim
        return true;
    //for(int i = 2; i <= sqrt(numar); i++) // Optimizare in caz de nevoie
    for(int i = 2; i <= numar / 2; i++) // Parcurgem toate numerele de la 2 la numar / 2
        if(numar % i == 0) // Daca acesta se imparte exact la acel numar, inseamna ca nu este prim
            return false;
    return true;
}
*/

  bool ePalindorm(int numar)
  {
     int numarInitial , numarInvers = 0;
     numarInitial = numar;
    while(numar)
      {
        int c = numar % 10;
        numar = numar / 10;
        numarInvers = numarInvers * 10 + c;
      }

      if(numarInitial == numarInvers)
      return true;
      else return false;
  }
int main()
{
  int nr;
  cin >> nr;
  cout<<ePalindorm(nr);
  /*
  int nr;
  cout<<"Citeste numarul:"; cin >> nr;
  if(ePrim(nr) == true)
  cout<<"Numarul "<<nr<<" este prim";
  else cout<<"Numarul "<<nr<<" nu este prim!";
  */
  return 0;
}
