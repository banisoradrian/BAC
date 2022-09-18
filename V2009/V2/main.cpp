#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    unsigned int x , y;
    cin >> x;
    while(x > 0)
    {
        cin >> y;
        if(x > y) {cout<< x % 10;}
        else cout<<y % 10;
    x = y;
    }
*/
char s[20],v[40];

    cin >> s;

    int n=0;

    for(int i=0;i<strlen(s);i++)
    {
        v[n++]=s[i];
        if(strchr("aeiou",s[i]))
            v[n++]=toupper(s[i]);
    }

    cout << v;
    return 0;
}
