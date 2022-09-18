#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int v[100] , n , c , i , j;
ifstream f("d:\\FisiereCPP\\V4S3.txt");
while(f >> c)
{
  if(c > 0 && c <= 99)
  {
    v[n] = c;
    n = n + 1;
  }
}
  if(n == 0)
   cout <<"NU EXISTA";
   for(i = 0 ; i < n   ; i++)
    for(j = i  ; j < n ; j++)
      if(v[i] < v[j])
        swap(v[i] , v[j]);
    for(i = 0 ; i <= n - 1 ; i++)
    cout<<v[i]<<" ";

  return 0;
}
