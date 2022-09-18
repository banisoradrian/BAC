#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("d:\\FisiereCPP\\TA2020T17.txt");
    int n,i,nrint=0;
    f>>n;
    int v[n+1];
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    int ms,md;
    cout<<endl;
    while(f>>ms>>md)
    {
        if(md<v[1] || ms>v[n])
            {
                nrint++;
                cout<<"["<<ms<<","<<md<<"]"<<endl;
            }
        else
            for(i=2;i<=n;i++)
                if(ms>v[i-1]&& md<v[i])
                    {
                         nrint++;
                         cout<<"["<<ms<<","<<md<<"]"<<endl;
                         break;
                    }
    }
    cout<<endl;
    cout<<"Nr intervale fara valori:"<<nrint<<endl;
    f.close();
    return 0;
}