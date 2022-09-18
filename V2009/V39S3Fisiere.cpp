#include <iostream>
using namespace std;

bool pr(int a)
{
    if(a < 2)
        return false;
    if(a == 2)
        return true;
    for(int i = 2 ; i <= a / 2 ; i++)
        if(a % i == 0)
            return false;
    return true;
}

int main()
{
    unsigned int n;
    cout<<"Citeste n: ";
    cin >> n;
    while(n)
    {
        if(pr(n) == true) 
            cout << n <<" ";
        else
        n = n / 10; 
    }
    return 0;
}