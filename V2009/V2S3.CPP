#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int v[1000] , n , c , i , j;
ifstream f("d:\\FisiereCPP\\V2S3.TXT");
while(f >> c)
{
  if(c > 0) //pt s3 avem if(c >= -999 && c <=999 )
  {
    v[n] = c;
     n++ ;
  }
}
  if(n == 0)
      cout<<"NU EXISTA";

  for(i = 0 ; i < n; i++)
      for(j = i  ;j < n - 1 ; j++)
        if(v[i] > v[j])
          swap(v[i] , v[j]);

  for(i = 0 ; i < n - 1 ; i++)
  cout<<v[i]<<" ";
  f.close();

  return 0;
}
