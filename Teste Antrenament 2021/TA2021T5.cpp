#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
unsigned int identice(long int n)
{
    unsigned int c , aux = 1;
    while(n > 9)
    {
        c = n % 10;
        if(c != n / 10 % 10)
        {
            aux = 0;
            break;
        }
        n = n / 10;
    }
    return aux;
}
int main()
{
    ///Metoda 1
    unsigned int n , c , maxx = 0;
    ifstream f("d:\\FisiereCPP\\TA2021T5.TXT");
    f >> n >> c;
    
    for(int i = 1 ; i <= n ; i++)
    {
        if(c > maxx)
            maxx = c;
        cout<<maxx<<" ";
        f >> c;
    }
    f.close();

    /*
    ///Metoda 2
    unsigned int n , c , maxx = 0;
    ifstream f("d:\\FisiereCPP\\TA2021T5.TXT");
    f >> c;
    while(f >> n)
    {
        if(n >= maxx)
            maxx = n;
        cout<<maxx<<" ";
    }
    f.close();
    */
    return 0;
}
/*
  unsigned int i , j , m , n;
    cout<<"Citeste m , n :";
    do
        cin >> m;
    while(!(m >= 2 && m <= 100));
    do
        cin >> n;
    while(!(n >= 2 && n <= 100));
    unsigned int A[m+1][n+1];
    for(i = 1 ; i <= m ; i++)
        for(j = 1 ; j <= n ; j++)
            A[i][j] = (i * j) % 10;

    for(i = 1 ; i <= m ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }
*/