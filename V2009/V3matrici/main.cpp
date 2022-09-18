#include <iostream>
using namespace std;
int main() {
  int i, n,  m , j , k = 1;
  do
  {
    cout << "Citeste n: ";
    cin >> n;
  } while (!(n >= 2 && n <= 10));

  do
  {
      cout<<"Citeste p: ";
      cin >> m;
  }
  while(!(m >= 2 && m <= 10));
  int A[n+1][n+1];
  for (i = 1; i <=n; i++)
    for (j = 1; j <= n; j++)
    {
      cout<<"A["<<i<<"]["<<j<<"] = ";
      cin >> A[i][j];
  }

  for (j = 1; j < n; j++)
       cout<<A[1][j]<<" ";
  for(i = 1 ; i < n ; i++)
        cout<<A[i][n]<<" ";
  for(j = n ; j > 1 ; j--)
        cout<<A[n][j]<<" ";
  for(i = n ; i > 1 ; i--)
        cout<<A[i][1]<<" ";

  return 0;
}
