#include <iostream>

using namespace std;

int sub(int n)
{
    int rez ;
    if (n <= 5) return n;
    else
    { 
        int  k = 5;
        while (k <= n)
          k = k * 2;
        return k / 2;
    }
}
int main()
{
    int n , s;
    do
    {
        cout<<"Citeste n= ";
        cin >> n;
    }
    while(!(n >= 0 && n <= 88888888));
    cout<<sub(83);
    do
    {
        cout<<"Citeste s= ";
        cin >> s;
    }
    while(!(s >= 0 && s <= 10000000));
    
    while (s) 
    {
        long n = sub(s);
        cout << n <<" ";
        s = s - n;
    }
    return 0 ;
}