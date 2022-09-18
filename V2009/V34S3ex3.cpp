#include <iostream>
#include <fstream>

using namespace std;

int maxi(int x[100],int n)
{
    int r,aux=1;
    r=x[1]-x[0];
    for(int i=2;i<n;i++)
        if(x[i]!=x[i-1]+r)
           {
             aux=0;
             break;
           }
    if(aux)
    {
        if(x[1]>x[0])
           return x[n-1]; // return x[4];
        else
            return x[0];
    }
    else
        return 0;
}

int main()
{
    int n,x[100],maxx=-9999,m;
    ifstream f("d:\\FisiereCPP\\V34.txt");
    f>>n;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
               f>>x[j];
            m=maxi(x,n);
            if(m>maxx)
                maxx=m;

        }
    cout<<maxx<<endl;

    
  
    return 0;
}










