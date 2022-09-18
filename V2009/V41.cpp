#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    unsigned int i , j , n;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 23));
    int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                A[i][j] = i + j;
        }
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<"\n";
        }
        

    /*
    int x , d = 2;
    cout<<"Citeste x: ";
    cin >> x;
    cout<<x<<" ";
    while(x >= d)
    {
       while(x % d == 0)
        {
            x = x / d;
            cout<<x<<" ";
        }
        d++;
    }
    */
    return 0;
}