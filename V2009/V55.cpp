#include <iostream>
using namespace std;
int putere(int n) 
{
  int p = 1;
  while (n)
   {
      p = p * 10;
      n = n / 10;
   }
   return p;
}
int main()
{
    int a[100] , b[100] , c[100] , n;
    cout<<"Citeste n: ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        {
            cout << "a["<<i<<"] = ";
            cin >> a[i];
        }
    for(int i = 1 ; i <= n ; i++)
        {
            cout << "b["<<i<<"] = ";
            cin >> b[i];
        }
     for (int i = 1; i <= n; i++)
        if (a[i] < b[i])
          c[i] = a[i] * putere(b[i]) + b[i];
        else
          c[i] = b[i] * putere(a[i]) + a[i];
      for (int i = 1; i <= n; i++)
        cout << c[i] << " ";
    return 0;
}