#include <iostream>
#include <fstream>
using namespace std;
void nrfp(unsigned int n , unsigned int &m)
{
    unsigned int div = 2 , p = 0;
    while(n != 1)
    {
        while(n % div == 0)
        {
            p++;
            n = n / div;
        }
        if(p)
            cout<<div<<" ^ "<<p<<", ";
        div++;
        p = 0;
    }
}
int main()
{
  unsigned int i , j , suma = 0 , n;
    do
        cin >> n;
    while(!(n >= 2 && n <= 100));
    unsigned int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
    }
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n ; j++)
            if(i < j && i + j > n + 1 && j != n)
                suma = suma + A[i][j];
    cout<<suma;
    return 0;
}