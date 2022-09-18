#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream f("d:\\FisiereCPP\\Ciorna.txt");
   int a , min1 = 100 , min2 = 100;

   while(f >> a)
   {
		if ( (a >= 10 && a <= 99) ||  (a <= -10 && a >= -99) ) 
       {
           if(a < min2) 
           {
               min1 = min2;
               min2 = a;
           }
           else if(a < min1)
                min1 = a;
       }
   }
   if(min2 == -100) cout<<0;
   else cout <<min2<<" "<<min1;
 return 0;
}