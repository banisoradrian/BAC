#include <iostream>
#include <fstream>
using namespace std;
unsigned long int sir[100000000];
int main()
{
    
    ifstream f("d:\\FisiereCPP\\TA2020T16.txt");
    int p,c,paritate,mm=0;
    int m;f>>m;
    int n;f>>n;
    while(f>>c)
        {
            sir[c]=1;
            if(mm<c)
                mm=c;
        }
    f.close();
    for(int i=1;i<=mm;i++)
        cout<<sir[i]<<" ";
    cout<<endl;
    p=0;
    while(p<=mm)
      {
          p++;
          if(sir[p])
          {
             cout<<p<<" ";
             paritate=p%2;
             break;
          }

      }


    p++;
    while(p<=mm)
    {
        if(sir[p])
        {
            if(p%2!=paritate%2)
            {
                cout<<p<<" ";
                paritate=p%2;
            }
        }
        p++;
    }
    
    return 0;
}