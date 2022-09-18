#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int factori(int n , int m)
{
    int d = 2 , p = 1 , nr = 0;
    while(n != 1 && m != 1)
    {
        while(n % d == 0 && m % d == 0)
        {
            nr++;
            n = n / d;  m = m / d;
        }
        while(n % d == 0)
            n = n / d;
        while(m % d == 0)
            m = m / d;
        d++;
    }
    return nr;
}
int main()
{
    /// cout<<factori(750 , 490);
    ifstream f("d:\\FisiereCPP\\TAT32020.TXT");
    int x , nr1 = 0 , nr2 = 0 , nr = 0 , aux = 0;

while(f >> x)
{
    nr++;
    if(x < 0 && aux == 0)
    {
        aux = 1;
        nr1 = nr;
    }
    if(aux == 1)
    nr2++;
}
f.close();
    if(nr1 < nr2)
        cout<<nr2;
    else
        cout<<nr1;
    return 0;
}

/*

int i , j , n , x;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 2 && n <= 20));
    x = n - 1;
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        {
            A[i][1] = x;
            for(j = 2 ; j <= n ; j++)
            
                if(i + j == n + 1)
                    A[i][j] = 0;
                else if(i + j > n + 1)
                     A[i][j] = A[i][j-1] + 1;
                else A[i][j] = A[i][j-1] - 1;
                x = x - 1;
        }
    
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<endl;
        }
*/