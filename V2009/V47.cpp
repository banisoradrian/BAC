#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int i , j , m , n;
    do
    {
        cout<<"Citeste m: ";
        cin >> m;
    }
    while(!(m > 0 && m <= 10));
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 0 && n <= 10));
    int A[m+1][n+1] , B[m+1][n+1];

    for(i = 1 ; i <= m ; i++)
        for(j = 1 ; j <= n ; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
            }
    cout<<"Afisarea matricei"<<endl;
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<"\n";
     }
     cout<<endl;
    cout<<"Afisarea matricei la 90 de grade"<<endl;
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
                B[n + 1 - j][i] = A[i][j];
     }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= m ; j++)
                cout<<setw(5)<<B[i][j];
                cout<<"\n";
     }
    return 0;
}