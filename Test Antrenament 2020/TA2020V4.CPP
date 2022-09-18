#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
void generatoare(int n)
{
    int a , b , aux = 0;
    for(a = 2 ; a <= n / 2 ; a += 2) /// sau Metoda 2 for(a = 2 ; a <= n / 2 ; a++)
        for(b = 2 ; b <= n / 2 ; b++)
            if(a != b && a * b + a / b == n ) /// sau Metoda 2 if(a != b && a * b + a / b == n && a % 2 == 0)
            {
                aux = 1;
                cout<<a<<"-"<<b<<" ";
            }
            if(aux == 0)
                cout<<"NU exista";
}
int main()
{
    ///generatoare(2020);
    unsigned int i , j , n , m , aux = 0 , contor = 0;
    do
    {
        cout<<"Citeste n coloane :";
        cin >> n;
    }
    while(!(n >= 2 && n <= 20));
    do
    {
        cout<<"Citeste m linii :";
        cin >> m;
    }
    while(!(m >= 2 && m <= 20));
    unsigned int A[m+1][n+1];
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] =";
            cin >> A[i][j];
        }
    }
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }
    cout<<endl;
    
    for(j = 2 ; j <= n ; j++)
    {
        aux = 1;
        for(i = 1 ; i <= m ; i++)
            if(A[i][j] == A[i][1])
                 aux = 0;
        if(aux == 1) contor++;
    }
    cout<<contor;
    return 0;
}