#include <iostream>
#include <cmath>
using namespace std;
unsigned int pDoi(unsigned int n)
   {
       int aux = 0 , i;
       for( i = 1 ; i <= n ; i++)
       {
            while (i%2==0);
                i=i/2;
                aux = 1;
       }
           if(aux == 1 && i == 1) return i;
           else return 5;
   }
int main()
{
   unsigned int n;
   cout<<pDoi(20);
    return 0;
}