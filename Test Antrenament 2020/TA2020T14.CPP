#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void perechi(long int n)
{
    unsigned int aux = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(i * j == n && (i + j) % 2 == 1)
            {
                aux = 1;
                cout<<"[ "<<i<<" "<<j<<" ]" ;
            }
            if(aux == 0)
                    cout<<"Nu exista ";
}
int main()
{
    //perechi(12);
    char s[101];
    cin.get(s , 101);
    for(int i = 0 ; i < strlen(s) ; i++)
        if(strchr("-" , s[i]))
            strcpy(s + i , s + i + 1);
            cout<<s;
    return 0;
}

/*
 Subiectul 2 ex 3
    int i , j , a[5][7];
    for(i=0;i<5;i++)
        for(j=6;j>=0;j--)
            if(i==0||j==6)
                a[i][j]=1;
            else
                a[i][j]= (a[i][j+1]+a[i-1][j])%10;
    for(i = 0 ; i < 5 ; i++)
        {
            for(j = 0 ; j < 7 ; j++)
                cout<<a[i][j]<<"   ";
                cout<<endl;
        }
*/