#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    /*

    unsigned int n;
  int i , j , cifra;
  do
  {
    cout<<"Citeste n: ";
    cin >> n;
  } while(!(n >= 1 && n <= 100));

  int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
  {
   for(j = 1 ; j <= n ; j++)
             A[i][j] = j;    
  }

  for(i = 1 ; i <= n ; i++)
    {
      for(j = 1 ; j <= n ; j++)
      cout<<setw(4)<<A[i][j]<<" ";
      cout<<endl;
    }
    */

   char sir1[100], sir2[100];
  int i, j;
  cin >> sir1 >> sir2;
  i = strlen(sir1) - 1;
  j = strlen(sir2) - 1;
  while (sir1[i] == sir2[j]) {
    i--;
    j--;
  }
  
  if (i == strlen(sir1))
    cout << "Nu exista";
  else
    cout << sir1 + i + 1;
    
   
    
    

    return 0;
}