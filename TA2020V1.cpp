#include <iostream>
using namespace std;
void putere(int n , int &d , int &p)
{
    p = 0 , d = 2;
   int divmax = 0 , pmax = 0;
   while(n != 1)
   {
       while(n % d == 0)
       {
           p++;
           n = n / d;
       }
       if(p)
       {
           if(p >= pmax)
           {
                pmax = p;
                divmax = d;
           }
       }
       d++;
       p = 0;
   }
   d = divmax;
   p = pmax;
}
int main()
{
      int n = 10780 , d , p;
     putere(n , d , p);
     cout <<d<<"  "<<p;
        return 0;
}
