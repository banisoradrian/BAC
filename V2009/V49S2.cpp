#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[21] , vocale[] = "aeiou";
    cout<<"Citeste sirul: ";
    cin >> s;
    for(int i = 0 ; i <= strlen(s) ; i++)
        {
            if(strchr(vocale , s[i]))
                cout<<s[i];
        }
    return 0;
}