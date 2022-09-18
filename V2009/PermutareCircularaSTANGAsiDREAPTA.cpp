#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ///Permutare Stanga
    int n , v[100];
    cout<<"Citeste n: ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> v[i];
   for(int i=1;i<=n;i++)
    {
        v[i-1]=v[i];
        v[n]=v[0];
    }
    for(int i = 1 ; i <= n ;i++)
    {
        cout << v[i]<<" ";
        cout<<endl;
    }
    return 0;
}