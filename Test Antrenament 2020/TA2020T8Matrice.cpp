#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n , k , i , j;
    cin >> n >> k;
    long int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n; j++)
            do 
            {
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
            }
            while(!(A[i][j] <= 1 && A[i][j] <= 100000000));
    cout<<endl<<"MATRICE INAINTE DE PERMUTARE";
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }

    /// Permutare
    /// pozitia elementului de pe diag este k
    /// interval pentru permutari i -> k - 1
    long int aux = A[k][1];
    for(int = 1 ; i <= k - 2 ; i++)
        A[k][i] = t[k][i+1];
    t[k][k - 1] = aux;
    cout<<endl;
     for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }
    return 0;
}