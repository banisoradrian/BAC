#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    int i , j;
    do
    {
        cout<<"Citeste n";
        cin>> n;
    }
    while(!(n > 2 && n < 20));
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
                if (( i == 1 ) || ( i == n) || ( j == 1 ) || ( j == n )) A[i][j] = i + j;
          else A[i][j] = A[i - 1][j - 1] + A[i - 1][j] + A[i - 1][j + 1];
    }

     for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
          cout<<A[i][j]<<"  ";
          cout<<endl;
    }
    return 0;
}
