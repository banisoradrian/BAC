#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    /*
    unsigned int n , k;
    int nr = 0 , p = 1;
    cin >> n >> k;
    while(n != 0 && k != 0)
    {
        if(n % 2 != 0)
        {
            nr = nr + n / 10 % 10 * p;
            p = p * 10;
        }
        else k = k - 1;
        n = n / 10;
    }
    cout << nr;



    int i=0;
    char s[50] = "abbacdde";
while (i<strlen(s)-1)
 if (s[i]==s[i+1])
 strcpy(s+i,s+i+1);
 else
 i=i+1;
cout<<s;

   int n , p , i; cin>>n>>p;
for( i = 1 ; i <= n*p ; i ++)
{
    cout<<(2 * (i - 1) ) * (2 * (i - 1) )<<" ";
     if(i % p == 0) cout<<endl;
  }
//   !!!Aceasi problema de mai jos!!!
*/

int n , p , i , j , k = 0;
do
{
    cout << "Citeste n: ";
    cin >> n;
}
while(!(n >= 2 && n <= 20));
do
{
    cout << "Citeste p: ";
    cin >> p;
}
while(!(p >= 2 && p <= 20));
int A[n+1][p+1];
for(i = 1 ; i <= n ; i++)
{
    for(j = 1 ; j <= p ; j ++)
        {

            A[i][j]= k * k;
            k = k + 2;
        }
}
  for(i = 1 ; i <= n ; i++)
    {
      for(j= 1 ; j <= p ; j++)
         cout<<A[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
