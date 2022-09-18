#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void p(int a, int b)
{
    int aux = 1;
    if(a>b) swap(a, b);

    for(int i = a ; i <= b ; i++)
    {
        aux = 1;
        if(sqrt(i)==(int)sqrt(i))
        {
            for(int j = 2; j <= sqrt(i)/2 ; j++)
                 if((int)sqrt(i) % j == 0)
                         aux = 0;
            if(aux && i != 1) cout<<i<<" ";
        }
    }
}
int cf[10];
int main()
{
    cout<<"*****************"<<endl;
    int a = 40 , b = 1;
    p(a , b);
    cout<<endl<<"*****************"<<endl;
    ifstream f("d:\\FisiereCPP\\V44.txt");
    unsigned int n , x;
    f >> n;
    while(f >> n)
    {
        while(n)
        {
            x = n % 10;
            if(!cf[x])
                cf[x] = 1;
            n = n / 10;
        }
    }
    f.close();
    for(int i = 0 ; i <= 9 ; i++)
        if(cf[i])
            cout<<i<<" ";
    return 0;
}