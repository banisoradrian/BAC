#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i , j , min , n;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 50));
    int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n ; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
            }

     for(i = 1 ; i <= n ; i++)
     {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
     }
     for(j = 1 ; j <= n ; j++)
        {
         min = A[1][j];
         for(i = 1 ; i <= n ; i++)
            if(A[i][j] < min)
                min = A[i][j];
                cout<<min<<" ";
        }
        cout << endl;
        // pentru linii
    for(i = 1 ; i <= n ; i++)
        {
         min = A[i][1];
         for(j = 1 ; j <= n ; j++)
            if(A[i][j] < min)
                min = A[i][j];
                cout<<min<<" ";
        }
        
            
    return 0;
}