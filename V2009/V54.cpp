#include <iostream>
#include <iomanip>
using namespace std;
void f(int i) 
{ 
 if(i<=5)
 { 
     cout<<i<<” ” ;| printf(”%d ”,i); 
    f(i+1); 
    cout<<i/2<<” ”;| printf(”%d ”,i/2); 
} 
int main()
{
    unsigned int n  , x , i , j , pcif , mcif , ucif;
    do
    {
        cout << "Citeste n: ";
        cin >> n;
    }
    while(!(n >= 4 && n <= 10));
    do
    {
        cout<<"Citeste x: ";
        cin >> x;
    }
    while(!(x >= 100 && x <= 999));
    int A[n+1][n+1];
     ucif = x % 10;
    mcif = (x / 10) % 10;
    pcif = (x / 10) / 10;
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                {
                    if(i == j)  A[i][j] = pcif;
                    else if(i + j == n + 1) A[i][j] = ucif;
                    else A[i][j] = mcif;
                }
        }
     for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
               cout<<setw(5)<<A[i][j];
               cout<<endl;
        }
    cout<<"Pt x = "<<x<<" avem "<<"prima cifra = "<<pcif<<" cifra din mijloc = " <<mcif<<" ultima cifra = "<<ucif;
    return 0;
}



/*
 unsigned int n , s = 0 , c;
    cout<<"Citeste n: ";
    cin >> n;
    while(n > 0)
    {
        c = n % 10;
        if(c % 2 == 0)
        {
            int p = 1;
            for(int i = 2 ; i <= c ; i++)
                p = p * i;
            s = s + p;
        }
        n = n / 10;
    }

    cout << s;
*/