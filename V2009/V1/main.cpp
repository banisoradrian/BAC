#include <iostream>

using namespace std;

int main()
{
    /*
    S1
    unsigned int n , z , p , c;
    cin >> n;
    z = 0;
    p = 1;
    while(n > 0)
    {
        c = n % 10;
        n = n / 10;
            if(c % 3 == 0)
            {
                z = z + p *(9 - c);
                p = p * 10;
            }
    }
    cout<<z;

*/
    int m , n;
    do
    {
        cout<<"Citeste n :" ; cin >> n;

    }
    while(!(n >= 2 && n <= 10 ));

     do
    {
        cout<<"Citeste m :" ; cin >> m;

    }
    while(!( m >= 2 && m <= 10));
    int A[n+1][m+1] ;
    for(int i = 1 ; i <= n  ; i++)
    {
        cout<<"\n";
        for(int j = 1 ; j <= m ; j++) //NU utilizam coloana si linia 0
        {
                if(i < j)
                    A[i][j] = i;
                else
                    A[i][j] = j;
                cout<<A[i][j]<<" ";
        }
    }



    return 0;
}
