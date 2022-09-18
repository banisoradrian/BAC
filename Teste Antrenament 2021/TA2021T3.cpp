#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;
unsigned int suma(unsigned int n)
{
    unsigned int suma = 1 , aux;
    for(int i = 2 ; i <= n ; i++)
        if(n % i == 0)
           {
               aux = 0;
               for(int d = 2 ; d <= i / 2; d++)
                    if(i % d == 0)
                        aux = 1;
                    if(aux == 1)
                        suma = suma + i;
           }
    return suma;
}
unsigned int frecventa[100000000] , poz[100000000];
int main()
{
    long int x;
    unsigned int contor = 0 , cifraZecilor , maxx = 0;
    ifstream f("d:\\FisiereCPP\\TA2021T3.txt");
    while(f >> x)
    {
        contor++;
        cifraZecilor = x / 10 % 10;
        frecventa[cifraZecilor]++;
        poz[cifraZecilor] = contor;
        if(frecventa[cifraZecilor] > maxx)
            maxx = frecventa[cifraZecilor];
    }
    for(int i = 1 ; i <= 9 ; i++)
        if(frecventa[i] == maxx)
            cout<<poz[i]<<" ";
    f.close();
    return 0;
}
/*
unsigned int i , j , n , m , aux = 0;
    do
     cin >> m;
    while(!(m >= 2 && m <= 20));
    do
     cin >> n;
    while(!(n >= 2 && n <= 20));
    unsigned int A[m+1][n+1];
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
            }
    }
    ///Matricea
    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }
    cout<<endl;
    for(i = 1 ; i <= m ; i++)
        for(j = 1 ; j <= m ; j++)
            if(A[i][1] != 0 && A[j][n] != 0 A[i][1] == A[j][n] && )
                {
                    aux = 1;
                    cout<<A[i][1]<<" ";
                }
    if(aux == 0)
        cout<<"nu exista";
*/