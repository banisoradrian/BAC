#include <iostream>
using namespace std;
int main()
{
    f(38);   
    unsigned int n , q = 1 , i = 1;
    cin >> n;
    while(i < n / i)
    {
        if(n % i == 0)
            q = q + i;
        i = i + 3;
    }
    cout << q;
    return 0;
}