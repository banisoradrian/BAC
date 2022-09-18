#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    unsigned int n ;
    int s = 10;
    cin >> n;
    while(n > 0)
    {
        if(n % 10 < s) s = n % 10;
        else s = -1;
        n = n / 10;
    }

    */
/*
    char s[50] = "abcdefg" , x[50];
  strcpy(x,s+4);
strcpy(s+4,"123");
strcat(s,x);
cout<<s;
*/

int n , i , j;
do
{
    cout<<"Citeste n: " ; cin >> n;
}
while(!(n >= 2 && n <= 23));



    return 0;
}
