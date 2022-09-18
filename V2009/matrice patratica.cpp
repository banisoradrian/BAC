#include <iostream>
using namespace std;
int main()
{
    int i , j , n;
    cout<<"Citeste n: " ; cin >> n;
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
    return 0;
}