#include <iostream>
using namespace std;
int main() {
int n , m , i , j , k = 1;
do
{
  cout<<"Citeste n: ";
  cin >> n;
}
while(!(n >= 2 && n <= 24));

do
{
  cout<<"Citeste m: ";
  cin >> m;
}
while(!(m >= 2 && m <= 24));

int A[n+1][m+1];

for(i = 1 ; i <= n ; i++)
  for(j = 1 ; j <= m ; j++)
  {
     A[i][j] = k * k;
     k += 2;
}

  for(i = 1 ; i <= n ; i++)
{
  for(j = 1 ; j <= m ; j++)
    cout<<A[i][j]<<"  ";
    cout<<endl;
}
  return 0;
}
