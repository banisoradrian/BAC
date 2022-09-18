#include <iostream>
#include <fstream>
using namespace std;
void Impare(long int &n)
{
    unsigned int m = 0 , p = 1;
    while(n)
    {
        unsigned int c = n % 10;
        if(c % 2 == 1)
            m = (c - 1) * p + m;
        else
            m = c * p + m;
        p = p * 10;
        n = n / 10;
    }
    n = m;
}
int main()
{  
    unsigned int varf , x , aux = 0;
    ifstream f("d:\\FisiereCPP\\bac2019.txt");
    f >> x;
    varf = x;
    cout<<varf<<' ';
    while(f >> x)
    {
        if(x < varf) 
            aux = 1;
        if(x > varf || (x == varf && aux == 0))
        {
            varf = x;
            cout<<varf<<' ';
            aux = 0;
        }
    }
    f.close();
    return 0;
}
/*
unsigned int m , n , i , j , aux = 1;
    do
        cin >> m;
    while(!(m >= 3 && m <= 21));
    do
        cin >> n;
    while(!(n >= 3 && n <= 21 && n % 2 == 1));
    unsigned int A[m+1][n+1];
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin >>A[i][j];
        }
    }
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<A[i][j]<<"    ";
            cout<<endl;
    }
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n / 2 ; j++)
            if(A[i][j] != A[i][n - j + 1])
                aux = 0;
    }
    if(aux == 1)
        cout<<"DA";
    else 
        cout<<"NU";
*/