#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /*

    unsigned int a = 323 , b = 2944;
    a = a / 10 % 10 * 10 + a % 10;
    b = b / 10 % 10 * 10 + b % 10;
    cout<<a<<"  "<<b<<endl;
    int i = a;
    while(i <= b)
    {
        if(i / 10 == i % 10) cout<< i % 10;
        i++;
    }
char x[100];
    strcpy(x,"bac2009");
cout<<x<<endl;
for(i=0;i<strlen(x);i++)
 if (strchr("0123456789",x[i])== 0)
 cout<<x[i];

 */

 unsigned int n ;
 int i , j;
 do
 {
     cout<<"Citeste n: ";
     cin>> n;
 }
 while(!(n > 2 && n < 20));
 int  A[n+1][n+1];
 for(i = 1 ; i <= n ; i++)
 {
     for(j = 1 ; j <= n ; j++)
        if(i % 2 == 1) A[i][j] = i + j;
        else
        {
                A[i][1]=i;
               A[i][j]=A[i-1][j-1];
        }
 }

 for(i = 1 ; i <= n ; i++)
 {
     for(j = 1 ; j <= n ; j++)
        cout<<A[i][j]<<"  ";
        cout<<"\n";
 }
    return 0;
}
