#include <iostream>

using namespace std;
int cf[10];
int main()
{
    int n,nr,c;
    do
    {
        cout<<"n=";
        cin>>n;
    }
    while(!(n>=1 && n<=20));

    for(int i=1;i<=n;i++)

      {
          do
             {
                cout<<"nr=";
                cin>>nr;
             }
          while(!(nr>=11111 && nr<=99999));

          c=nr%10;
          nr=nr/10;
          while(c==nr%10)
            nr=nr/10;
          if(nr==0)
            cf[c]++;
       for(int l=0;l<=9;l++)
                cout<<cf[l]<<"  ";
       cout<<endl;
       cin.get();
      }
    for(int k=0;k<=9;k++)
        {
            if(cf)
              for(int i=1;i<=cf[k];i++)
                  {
                      cout<<k<<k<<k<<k<<k;
                      cout<<endl;
                  }
        }
    return 0;
}