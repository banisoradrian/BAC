#include <iostream>
using namespace std;
void sub(int n, int k)
{
  for (int i = n; i >= 1; i--)
        cout << i * k << " ";
}

int main()
{
    int n , k;
    cout<<"Citeste n: ";
    cin>> n;
    cout<<"Citeste k: ";
    cin >> k;
    cout<<endl;
    sub(n , k);
    return 0;
}
