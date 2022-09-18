#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
 unsigned int n , i , j , minn , p = 1 , aux;
 do
 {
     cout<<"Citeste n: ";
     cin >> n;
 }
 while(!(n >= 1 && n <= 30));
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
            cout<<"\n";
    }
for(i = 1 ; i <= n ; i++)
    for(j = 1 ; j <= n ; j++)
        if(i + j == n + 1)
        {
            aux = 1;
            minn = A[i][j];
            for(int t = 1 ; t <= n ; t++)
                if(A[t][j] < minn)
                {
                    aux = 0;
                    break;
                }
                if(aux)
                    p = p * minn;
        }
cout << p % 10;
    return 0;
}