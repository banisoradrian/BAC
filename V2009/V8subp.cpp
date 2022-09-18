#include <iostream>
#include <iomanip>

using namespace std;

void sub(int n , int m)
{
    int a[n+1],b[m+1];
    do
    {
        cout<<"Citeste n : ";
        cin >> n;
    }
    while(!(n > 0 && n <= 100));

    do
    {
        cout<<"Citeste m : ";
        cin >> m;
    }
    while(!(m > 0 && m <= 100));

    for(int i = 1 ; i <= n ; i++)
    {
        do
        {
            cout<<"a["<<i<<"]= ";
            cin>>a[i];
        }
        while(!((a[i]>=0) && (a[i<=9999])));
    }
    for(int i = 1 ; i <= m ; i++)
    {
        do
        {
            cout<<"b["<<i<<"]= ";
            cin>>b[i];
        }
        while(!((b[i]>=0) && (b[i<=9999])));
    }
///////////////////////////
    int ultim , p1 = 1 , p2 = 1;
    if(a[p1] < b[p2])
        {
           ultim = a[p1];
           p1++;
        }
    else
        {
            ultim = b[p2];
            p2++;
        }
    cout<<setw(6)<<ultim;
    while(p1<=n && p2<=m)
      {
          if(ultim % 2 == 0)
            {
              while(b[p2] < ultim)
                p2++;
              ultim = b[p2];
              p2++;
            }
        else
            {
               while(a[p1] < ultim)
                p1++;
               ultim = a[p1];
               p1++;
            }

         cout<<setw(6)<<ultim;

     }
 if(ultim % 2!= 0 && p1 < n)
    cout<<setw(6)<<a[++p1];
 if(ultim % 2 == 0 && p2 < m)
    cout<<setw(6)<<b[++p2];
}

int main()
{
    sub(4 , 4);
    return 0;
}