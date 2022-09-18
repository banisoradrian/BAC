#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int f(int x,int y) 
{if(x==y)return x; 
 else if(x<y)return f(x+1,y-1); 
 else return f(x-1,y); 
} 
int main()
{
    unsigned int i , j , n;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 23));
    int A[n+1][n+1];

    for(i = 1 ; i <= n ; i++)
        
            for(j = 1 ; j <= n ; j++)
                if(i < j) A[i][j] = i;
                else A[i][j] = j;
        
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<"\n";
        }
     
    return 0;
}