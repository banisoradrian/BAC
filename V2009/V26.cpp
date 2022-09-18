#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    unsigned int n;
    int i , j , aux = 0;
    float p;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 2 && n <= 9));
    int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
        for(j= 1 ; j <= n ; j++)
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
    for(i = 1 ; i <= n ; i++)
        {
             p = 1;
            for(j = 1 ; j <= n ; j++)
                p *= A[j][i];    
                

                for(j = 1 ; j <= n ; j++)
                    if(A[j][i] == p / A[j][i])
                    {
                        cout<<A[j][i]<<endl;
                        aux = 1;
                    }
                    cout<<"----------"<<endl;
                    cin.get();
            
        }
    if(aux == 0) cout<<"NU EXISTA";

        return 0;
}