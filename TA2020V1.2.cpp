#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int n , k , i , j , x;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 2 && n <= 20));

    do
    {
        cout<<"Citeste k: ";
        cin >> k;
    }
    while(!(k >= 2 && k <= 20));
    int A[n+1][n*k+1];
    for(i = 1 ; i <= n ; i++)
    {
        x = i;
        for(j = 1 ; j <= n * k ; j++)
        {
            if(j % k != 0)
                A[i][j] = x;
            else 
            {
                A[i][j] = x;
                x++;
            }
        }
    }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n * k ; j++)
            {
                cout<<setw(5)<<A[i][j];
                cout<<endl;
            }
    }
    return 0;
}