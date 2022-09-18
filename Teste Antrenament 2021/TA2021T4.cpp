#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
unsigned int joc(unsigned int n)
{
    unsigned int contor = 0;
    for(int i = 2 ; i <= n ; i++)
        if(n % i == 0)
            contor++;
    return contor;
}
int main()
{
   unsigned int i , j , m , n , aux = 0;
   do
   {
       cout<<"Citeste m :";
       cin >> m;
   }
   while(!(m >= 2 && m <= 100));
   do
   {
       cout<<"Citeste n :";
       cin >> n;
   }
   while(!(n >= 2 && n <= 100));
   unsigned int A[m+1][n+1];
   for(i = 1 ; i <= m ; i++)
   {
       for(j = 1 ; j <= n ; j++)
       {
           cout<<"A["<<i<<"]["<<j<<"] = ";
           cin >> A[i][j];
       }
   }
   for(i = 1 ; i <= m ; i++)
   {
       for(j = 1 ; j <= n ; j++)
          cout<<setw(5)<<A[i][j];
          cout<<endl;
   }
   cout<<endl;
   for(i = 1 ; i <= m ; i++)
   {
       unsigned int minn = 0;
       for(j = 1 ; j <= n ; j++)
          if(A[i][j] > minn && A[i][j] < 21) 
                minn = A[i][j];
       if(minn != 0)
            cout<<minn<<endl;
       else 
            cout<<"nu exista"<<endl;
   }
    return 0;
}
