#include <iostream>
#include <cstring>
using namespace std;
void suma(long int n , unsigned int &s)
{
    s = 0;
    int contor[10]={0};
    while(n)
    {
        if(n  % 10 % 2 == 1 && contor[n % 10] == 0)
            {
                s = s + n % 10;
                contor[n%10]++;
                
            }
        n = n / 10;
    }
}
int main()
{
 unsigned int n , i;
   char sir[20][20];
   bool aux = 0;
   cout<<"Citeste n : ";
   cin >> n;
   for(i = 0 ; i < n ; i++)
    cin >> sir[i];
   for(i = 0 ; i < n - 1 ; i++)
   {
       if( strstr (sir[i] , sir[n-1]) == sir[i])
        {
            aux = 1;
            cout<<sir[i]<<" ";
        }
   }
   if(aux == 0)
    cout<<"nu exista";
    return 0;
}

