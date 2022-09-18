#include <iostream>
using namespace std;
int main() 
{
  unsigned int n , m;
  int i , j , cifra;
  do
  {
    cout<<"Citeste m: ";
    cin >> m;
  }
  while(!(m >= 1 && m <= 100));
  
  do
  {
    cout<<"Citeste n: ";
    cin >> n;
  } while(!(n >= 1 && n <= 100));

  int A[m+1][n+1];

    for(i = 1 ; i <= m ; i++)
  {
   for(j = 1 ; j <= n ; j++)
             if(i==1)  A[i][j]=j % 10;
             else  if(j==1) A[i][j]=i % 10;
             else A[i][j]=A[i-1][j] % 10 + A[i][j-1];     
  }

  for(i = 1 ; i <= m ; i++)
    {
      for(j = 1 ; j <= n ; j++)
      cout<<A[i][j]<<" ";
      cout<<endl;
    }
     cifra = A[m][n] % 10;
cout<<"Ultima cifra este: "<<cifra;
  return 0 ;
}