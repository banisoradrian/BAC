#include <iostream>
using namespace std;
int main()
{
    int n , m , i , j ;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 100));
    do
    {
        cout<<"Citeste m: ";
        cin >> m;
    }
    while(!(m >= 1 && m <= 100));
    int A[n+1][m+1];
     for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] =";
            cin >> A[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1; j <= m ; j++)
            swap(A[i][j], A[i][j+2]);
    for(int i = 1 ; i <= n ; i++)
        {
        for(int j = 1; j <= m ; j++) 
        cout << A[i][j] <<" ";
        cout << endl;
        }
    return 0;
}