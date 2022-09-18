#include <iostream>
#include <fstream>
using namespace std;
void numar(long int n , unsigned int c , int &m)
{
    m = 0;
    unsigned int p = 1 , uc , aux = 0;
    while(n)
    {
        uc = n % 10;
        if (uc != c) 
        {
            aux = 1;
            m = uc * p + m;
            p = p * 10;
        }
        n = n / 10;
    }
    if(m == 0 && aux == 0)
        m = -1;
}
int x , p1 , p2 , p3 , contor;
int main()
{
    ifstream f("d:\\FisiereCPP\\TA2021T6.TXT");
    while(f >> x)
    {
        contor++;
        if(x <= 0)
            if(p1 == 0)
                p1 = contor;
            else if(p2 == 0)
                p2 = contor;
            else
                p3 = contor;
    }
    int a , b , c;
    a = p2 - 1;
    b = p3 - p1 - 1;
    c = contor - p2;
    if(a > b && a > c)
        cout<<a;
    if(b > a && b > c)
        cout<<b;
    else
        cout<<c;
    return 0;
}
/*
    unsigned int i , j , n;
    do
        cin >> n;
    while(!(n >= 3 && n <= 20));
    unsigned int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
             if(i + j <= n + 1)
                A[i][j] =  n + 1 - i - j;
            else
                A[i][j] = A[i][j-1] + 1;
    } 
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<A[i][j]<<"     ";
            cout<<endl;
    } 
*/