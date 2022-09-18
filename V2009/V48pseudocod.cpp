#include <iostream>
using namespace std;
int main()
{
    unsigned int n , i , x , nr;
    cout<<"Citeste n: ";
    cin >> n;
    for(i = 1 ; i <= n ; i++)
    {
        cin >> x;
        nr = 0;
        while(x > 0)
        {
            nr = nr * 100 + x % 10;
            x = x / 100;
        }
        while(nr > 0)
        {
            x = x * 10 + nr % 10;
            nr = nr / 10;
        }
        cout << x <<" ";
    }
    //2008 1965 2727 1861 11021 165
    /*
    b. toate nr de forma ABA , de ex 999 , 888 , 303 , 101
    c. 
    i = 1;
    do
    {
        cin >> x;
        nr = 0;
        while(x > 0)
        {
            nr = nr * 100 + x % 10;
            x = x / 100;
        }
        while(nr > 0)
        {
            x = x * 10 + nr % 10;
            nr = nr / 10;
        }
        cout<<x<<" ";
    }
        i++;
        while(i <= n);
        cout << x <<" ";

    return 0;
}