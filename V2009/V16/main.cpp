#include <iostream>
#include <string.h>
using namespace std;



int main()
{
    int n , i , j;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 2 && n < 16));
int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)

        if(i == j || i + j == n + 1) A[i][j] = 0;
       else if (i < j && i+j < n+1)
          A[i][j]=1;
      else if (i + j > n + 1 && i > j)
          A[i][j]=2;
      else
          A[i][j]=3;


    }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        cout<<A[i][j]<<"  ";
        cout<<endl;

    }

    return 0;
}
