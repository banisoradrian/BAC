#include <iostream>
using namespace std;
void afisareDivizori(int x)
{
    for(int i = 2; i <= x / 2; i++)
    {
        if(x % i == 0)
            cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "N = ";
    cin >> n;
    afisareDivizori(n);
    return 0;
}
