#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
   ifstream f("d:\\FisiereCPP\\V8S3.txt");
   int nr ; f>>nr;
   double c , suma = 0;
   for(int i = 1 ; i <= nr ; i++)
   {
     f>>c;
     if((int)sqrt(c) == sqrt(c))
      {
        suma = suma + c;
        if(i == 1)  cout<<c;
        /*
        sau 
        si fara suma = suma + c;
        if(suma == 0)
            {
                cout << i;
                suma = suma + i;
            }
        */
        else cout<<"+"<<c;
      }
   }
   cout<<"="<<suma;
   f.close();
  return 0;
}
