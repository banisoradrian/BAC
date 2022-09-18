#include <iostream>
#include <fstream>
using namespace std;
int multiplu(int a, int k) 
{
    int x , y ;
	x = a;
    y = k;
    while(x != y)
        {
            if(x > y)
                x = x - y;
            else
                y = y - x;
        }
return (a * b) / x;
}

int main()
{
   unsigned int x , y , z , aux = 0;
    cin>>x>>y>>z;
    for(int i = x ; i <= y ; i++)
        if(i==multiplu(i , z))
        {
            ok=1;
            break;
        }

    if(ok) cout<<"DA";
    else cout<<"NU";
    return 0;
}