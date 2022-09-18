#include <iostream>
#include <cmath>
#include<string.h>
using namespace std;

int main()
{
    /*
       unsigned int n;
   cin >> n;
   int s = - 1;
   while( n > 0)
   {
       if ( n % 10 > s)
        s = n % 10;
       else
        s = 11;
       n = n / 10;
   }
   cout << s;
*/
    char s[256];
    cin.getline(s , 256);
    s[0] = s[0] - 32; // nu ar lua primul cuvant
    for(int i = 1 ; i < strlen(s) ; i++)
        if(s[i] != ' ' && s[i-1] == ' ')
        s[i]=s[i] - 32;
    cout <<s;


    return 0;
}
