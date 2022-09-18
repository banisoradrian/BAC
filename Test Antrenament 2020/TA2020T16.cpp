#include <iostream>
#include <cstring>
using namespace std;
unsigned int nrDivPrimi(long int n)
{
    unsigned int div = 2 , p = 0 , contor = 0;
    while(n != 1)
    {
        while(n % div == 0)
        {
            p++;
            n = n / div;
        }
        if(p != 0 && p % 2 == 1)
            contor++;
        div++;
        p = 0;
    }
    return contor;
}
int main()
{
   /// cout<<nrDivPrimi(9000)<<endl;
    cout<<"START"<<endl;
    unsigned int i , j , n , m , k = 1;
    do
        cin >> n;
    while(!(n >= 2 && n <= 100));
    do
        cin >> m;
    while(!(m >= 2 && m <= 100));
    unsigned int A[n+1][m+1];
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= m ; j++)
        {
            A[i][j] = k * k;
            k = k + 2;      
        } 
    }
     for(i = n ; i >= 1 ; i--)
    {
        for(j = m ; j >= 1 ; j--)
            cout<<A[i][j]<<"  ";
            cout<<endl;      
    }
    return 0;
}
/*
int n , k , nr , p , c;
    cout<<"Citeste n , k :";
    cin >> n >> k;
    if(k == 0)
        nr = -1;
    else
    {
        nr = 0;
        p = 1;
        do
        {
            c = n % 10;
            n = n / 10;
            if(c % 2 == 0)
            {
                nr = nr + c * p;
                p = p * 10;
            }
            else
                k--;
            
        }
         while(!(n == 0 || k == 0));
    }
    cout<<nr;
*/