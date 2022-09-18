#include <iostream>

using namespace std;

int main()
{
//descompunerea unui numar in cifre rasturnat
  int numar;
      cin >> numar;
      cout << "Numarul " << numar << " are urmatoarele cifre: ";

      int cifraCurenta;
      while(numar != 0)
      {
          cifraCurenta = numar % 10;
          numar = numar / 10;
          cout << cifraCurenta << " ";
      }

/*
//cate cifre are un numar
        int numar;
         cin >> numar;
         cout << "Numarul " << numar << " are ";
         int nr_cifre = 0;
         while(numar != 0)
         {
             numar = numar / 10;
             nr_cifre++;
         }
         cout << nr_cifre << " cifre.";
         */

      return 0;
}
