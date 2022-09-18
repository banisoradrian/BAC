#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /*
    unsigned int x , y;
    cin >> x >> y;
    if(x < y)
    {
        x = x - y;
        y = x + y;
        x = y - x;
    }
    while(x >= y)
    {
        cout<<'A';
        x = x - y;
        cout <<"B";
    }

    char a[100]; int i;
    strcpy(a,"bacalaureat");
cout<<strlen(a)<<endl;
for(i=0;i<strlen(a);i++)
 if(strchr("aeiou",a[i])!=0)
 cout<<"*";
******
*/
unsigned int n ;
int i , j;
do
{
    cout<<"Citeste n: ";
    cin>>n;
}
while(!(n > 2 && n < 20));
int A[n+1][n+1];
for(i = 1 ; i <= n ; i++)

    for(j = 1 ; j <= n ; j++)
        A[i][j] = i + j - 1;


for(i = 1 ; i <= n ; i++)
{
    for(j = 1 ; j <= n ; j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
}

    return 0;
}
