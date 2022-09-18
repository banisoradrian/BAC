#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /*
    unsigned int x , y , z;
    cin >> x >> z;
    y = 0 ;
    do
    {
        y = y * 10 + x % 10;
        x = x / 100;
    }
    while(!(x == 0));

    if(y  == z) cout << 1 ;
    else cout<< 0 ;
        */

        /*
        int i = 0;
        char s[]="brac";
        int j = strlen(s) - 1;
        while(i < j)
        {
            strcpy(s + i , s + i - 1);
             cout<<s<<endl;
        }
        cout<<s;
        */


        int n , m , i , j;
        do
        {
            cout<<"Citeste n: " ;
            cin >> n;
        }
        while(!(n >= 2 && n <= 24));

        do
        {
            cout<<"Citeste m: " ;
            cin >> m;
        }
        while(!(m >= 2 && m <= 24));
        int A[n+1][m+1];
        for(i = 0 ; i <= n ; i++)
        {
            for(j = 1 ; j <= m ; j++)
            {
                if(i > j) A[i][j] = i;
                else A[i][j] = j;
            }
        }
        for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= m ; j++)
                cout<<A[i][j]<<" " ;
            cout<<endl;
        }



    return 0;
}
