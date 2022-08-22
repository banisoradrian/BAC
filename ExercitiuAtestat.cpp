#include <iostream>
using namespace std;
int main()
{
    unsigned int i , j , n , m;
    do
    {
        cout<<"Citeste n : ";
        cin >> n;
    }
    while(!(n >= 2 && n <= 10));
    do
    {
        cout<<"Citeste m : ";
        cin >> m;
    }
    while(!(m >= 2 && m <= 10));
    int A[n+1][m+1];
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= m ; j++)
            {
                if(i > j)
                    A[i][j] = i;
                else
                    A[i][j] = j;
            }
        }
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= m ; j++)
                cout<<A[i][j]<<" ";
                cout<<endl;
        }
    return 0;
}