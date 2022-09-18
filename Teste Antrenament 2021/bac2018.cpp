#include <iostream>
#include <fstream>
using namespace std;
unsigned int resturi(long int n, long int x, long int y, long int r)
{
    r = 0;
    long int contor = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i % x == r && i % y == r)
            contor++;
    }
    return contor;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\bac2018.txt");
     int x , contor = 0 , contorMax = -1 , precedent1 = 0 , precedent2 = 0;
    while(f >> x)
    {
        if(precedent1 != x && precedent2 != x)
        {
            contor++;
                if(contor > contorMax)
                    contorMax = contor;
        }   
        else
            contor = 1;
        precedent2 = precedent1;
        precedent1 = x;
    }
    cout<<contorMax;
    return 0;
}