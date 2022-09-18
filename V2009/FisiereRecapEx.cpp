#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("d:\\FisiereCPP\\FisiereRecEx.TXT");
    int v[100] , n = 0 , c , i , j;
    while(f >> c)
    {
      if( c > 1)
        {
          v[n] = c;
          n++;
        }
    }
    if(n == 0) cout <<"NU EXISTA";

    for( i = 1 ; i <= n - 1 ; i++)
       for(j = i + 1 ; i <= n ; j++)
        if(v[i] > v[j]) swap(v[i] , v[j]);

    for(i = 1 ; i <= n - 1 ; i++)
        cout<<v[i]<<" ";
        f.close();

    return 0;
}