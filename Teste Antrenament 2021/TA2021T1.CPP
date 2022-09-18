#include <iostream>
#include <fstream>
using namespace std;
void divX(unsigned int n , unsigned int x)
{
    unsigned int contor = 0 , v[10]={0};
    for(int i = x ; i <= 9999 && contor < n ; i++)
        {
            if(i % x == 0)
            {
                 v[contor] = i;
                  contor++;
            }
        }
    for(int i = n ; i >= 1 ; i--)
        cout<<v[i]<<" ";
}
unsigned int v[100];
int main()
{ 
  unsigned int contor = 0;
  unsigned int long x;
  ifstream f("d:\\FisiereCPP\\TA2021T1.TXT");
  while(f >> x)
    if(x >= 10 && x <= 99)
        if(x % 10 != x / 10 % 10)
             v[x] = 1;
    f.close();
    for(int i = 98 ; i >= 10 && contor < 2; i--)
    {
        if(v[i] == 0)
        {
            cout<<i<<" ";
            contor++;
        } 
    }
    return 0;
}
/*
  unsigned int n;
    long int i , j;
    do
        cin >> n;
    while(!(n >= 2 && n <= 100));
    unsigned int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] =";
                cin >> A[i][j];
            }
    }
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)       
            cout<<A[i][j]<<"     ";
            cout<<endl;
    }
    cout<<endl;
    for(i = 1 ; i <= n ; i++)
        cout<<A[i][1]<<" ";
    for(j = 2 ; j <= n ; j++)
        cout<<A[n][j]<<" ";
    for(i = n - 1 ; i >= 1 ; i--)
        cout<<A[i][n]<<" ";
    for(j = n -1 ; j >= 2 ; j--)
        cout<<A[1][j]<<" ";
*/