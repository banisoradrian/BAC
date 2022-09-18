#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*
    unsigned int a , b , c , t;
    cin >> a >> b >> c;
    if(a > b) 
    {
        t = a;
        a = b;
        b = t;
    }
    while(a <= b)
    {
        if(a % c == 0) cout << a;
        a++;
    }
    */
   unsigned int n , m , max = 0;
   int i , j;
   do
   {
       cout<<"Citeste n: ";
       cin >> n;
   }
   while(!(n >= 1 && n <= 100));
   do
   {
       cout<<"Citeste m: ";
       cin >> m;
   }
   while(!(m >= 1 && m <= 100));
   int A[n+1][m+1];
   for(i = 1 ; i <= n ; i++)
       for(j = 1 ; j <= m ; j++)
          {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin >> A[i][j];
          }

    for(j =1 ; j <= m ; j++)
        {
           int p = 1;
            for(i = 1 ; i <= n ; i++)
            {
                p *= A[i][j];
            }
                if(p > max) max = p;
        }

         for(i = 1 ; i <= n ; i++)
            {
             for(j = 1 ; j <= m ; j++)
             cout<<setw(6)<<A[i][j]<<" ";
             cout<<endl;
             }

         for(j =1 ; j <= m ; j++)
        {
            int p = 1;
            for(i = 1 ; i <= n ; i++)
            {
                p *= A[i][j];
            }
                if(max == p) 
                cout<<j<<" ";
        }

      
    return 0;
}


