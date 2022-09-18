#include <iostream>
#include <iomanip>

using namespace std;
int cf[10];
int cif(int a,int b)
{
    int nr=0;
    while(a)
    {
        if(a%10==b)
            nr++;
        a=a/10;
    }
    return nr;
}
int main()
{
    int n;
    do
    {
            cout<<"n=";
            cin>>n;
    }
    while(!(n>=10000000 && n<=99999999));
    for(int i=0;i<=9;i++)
        cf[i]=cf[i]+cif(n,i);

    for(int i=9;i>=0;i--)
        cout<<setw(6)<<cf[i];
    int aux=1;
    for(int i=0;i<=9;i++)
        if(!(cf[i]%2==0 || cf[i]%4==0 || cf[i]%8==0))
          {
              aux=0;
              break;
          }
    cout<<endl;
    cout<<endl<<aux<<endl;
    if(aux==0)
        cout<<"NOT palindrom"<<endl;
    else
        {
            for(int i=9;i>=0;i--)
              if(cf[i])
                for(int j=1;j<=cf[i]/2;j++)
                   cout<<setw(6)<<i;

            for(int i=0;i<=9;i++)
              if(cf[i])
                for(int j=1;j<=cf[i]/2;j++)
                   cout<<setw(6)<<i;
       }
    cout<<endl<<"========"<<endl;
    return 0;
}