#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int p(int a[100] , int n , int k)
{
    int suma = 0 , aux = 0;
    do
    {
        aux = 1;
        for(int i = 1 ; i < n ; i++)
            if(a[i] < a[i+1])
                {
                    swap(a[i] , a[i+1]);
                    aux = 0;
                }
    }
    while(!aux);

    for(int i = 1 ; i <= k ; i++)
        suma = suma + a[i];
    
    return suma;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\V42.txt");
      int n , frecventa[100] , c;
      for(int i = 0 ; i <= 100 ; i++)
            frecventa[i] = 0;
      f >> n;
      for(int i = 0 ; i <= n ; i++)
          {
              f >> c;
              frecventa[c]++;
          }
      for(int i = 0 ; i <= 100 ; i++)
            if(frecventa[i] == 1)
                cout<<i<<" ";
 /*
    int a[100] , n , k;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
        cout<<p(a , n , k);
*/

  /*
   char s[41] , vocale[]="aeiou" , aux = 0;
   cin.get(s , 41);
   cout<<s<<endl;
   for(int i = 1 ; i <= strlen(s) ; i++)
   {
        if(strchr(vocale , s[i]))
            {
                aux = 1;
                cout<<s[i]<<" ";
            }
        else
        {
            aux = 0;
           cout<<"nu exista";
           break;
        }
   }
*/           
    return 0;
}