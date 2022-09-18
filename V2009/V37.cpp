#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    
 
char s[256] , k;
k = 'a' - 'A';
cin.get(s,256);

  for(int i=1;strlen(s) ;++i)
        if(i==0 || i == strlen(s) - 1)
            s[i] = s[i] - k;
        else
            if(s[i] >= 'a' && s[i] <='z' && (s[i-1] == ' ' || s[i+1] == ' '))
                s[i] = s[i] - k;
   cout << s << endl;
   /*
   ///S3 Problema 3
      int n, k, v[100];

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>v[i];

    while(k--)
    {
        v[n+1]=v[1];
        for(int i=1; i<=n; i++)
             v[i]=v[i+1];
    }

    for(int i=1; i<=n; i++) 
        cout<<v[i]<<" ";
    */

    return 0;
}