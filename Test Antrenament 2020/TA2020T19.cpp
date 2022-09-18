#include <iostream>
#include <fstream>
using namespace std;
void paritate(long int n , unsigned int &nr)
{
    nr = 0;
    unsigned int x = n % 2;
    for(int i = 1 ; i <=n ; i++)
        if(n % i == 0 && i % 2 == x)
            nr++;
}
unsigned int frecventa[100000000];
int main()
{
    unsigned int long x , y;
    int contor = 0;
    ifstream f("d:\\FisiereCPP\\TA2020T19.txt");
    f >> y;
    while(f >> x)
    {
        if(y != x && x % 2 == 0)
            {
                cout<<x<<" ";
                y = x;
            }
    }
    f.close();
    return 0;
}

/*
Varianta NEEFICIENTA
unsigned int long x;
   ifstream f("d:\\FisiereCPP\\TA2020T19.txt");
   while(f >> x)
    if(x % 2 == 0)
        frecventa[x]++;
   f.close();
    for(int i = 2 ; i <= 100000000 ; i= i + 2)
    {
       if(frecventa[i] >= 1)
            cout<<i<<" ";
    }
*/