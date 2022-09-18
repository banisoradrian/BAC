#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;
unsigned int factori(unsigned int n , unsigned int m)
{
    unsigned int p1 = 0 , p2 = 0 , div = 2 , contor = 0;
    while(n != 1 && m != 1)
    {
        while(n % div == 0)
        {
            p1++;
            n = n / div;
        }
        while(m % div == 0)
        {
            p2++;
            m = m / div;
        }
        if(p1 != 0 && p2 != 0 && p1 == p2)
                contor++;
        div++;
        p1 = p2 = 0;
    }
    return contor;
}
int contor , x , p1 , p2;
int main()
{
    ifstream f("d:\\FisiereCPP\\TA2021T2.txt");
    while(f >> x)
    {
        contor++;
        if(x > 0)
            if(p1 == 0)
                p1 = contor;
            else
                p2 = contor;
    }
    if(p2 != 0)
        if(contor - p1 + 1 > p2)
            cout << contor - p1 + 1;
        if(p2 == 0)
            if(p1 > contor / 2)
                cout << p1;
        else
            cout << contor- p1 + 1;
    f.close();
    return 0;
}
/*
unsigned int i , j , n;
   do
   {
       cout<<"Citeste n: ";
       cin >> n;
   }
   while(!(n >= 2 && n <= 20));
   unsigned int A[n+1][n+1];
   for(i = 1 ; i <= n ; i++)
   {
       for(j = 1 ; j <= n ; j++)
            if(i + j == n + 1)
                A[i][j] = 5;
            else if(i + j < n + 1)
                A[i][j] = i + j - 1;
            else
                A[i][j] = A[i][j-1] - 1;
   }
   for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
    }
*/