#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[52] , sc[234]; // sirul s este format din 26 de litere si 26 de numere , sirul maxim obtinut 26 * 9 = 234
    int k = 0;
    cin >> s;
    for(int i = 0 ; i < strlen(s) - 1 ; i = i + 2)
        for(int j = 1 ; j <= s[i + 1] - '0' ; j++)
            {
                sc[k] = s[i];
                k++;
            }
    sc[k] = 0;
    cout << sc;
    return 0;
}