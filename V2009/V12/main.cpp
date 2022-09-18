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
    while(!(n >= 2 && n <=25));
    int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)

           A[i][j] = (i * j) % 10;

    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)

        cout<<A[i][j]<<" ";
        cout<<endl;

    }


    return 0;
}
