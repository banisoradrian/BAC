#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
   unsigned int x , v[100000] = {0} , contor = 0 , aux;
   ifstream f("d:\\FisiereCPP\\bac2020.txt");
   while(f >> x)
   {
       contor++;
       v[contor] = x;
   }
   for(int i = 1 ; i <= contor ; i++)
      for(int j = contor ; j >= 1 ; j--)
            if(v[i] != v[j])
                {
                    aux = 0;
                    cout<<"NU";
                    break;
                }
    if(aux == 1)
        cout<<"DA";
    return 0;
}