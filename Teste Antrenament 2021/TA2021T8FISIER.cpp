#include <iostream>
#include <fstream>
using namespace std;
///Varianta NEEficienta
long int x , contor , v[100000000];
///Varianta Eficienta 2
long int a , b , c;
int main()
{
    ifstream f("d:\\FisiereCPP\\TA2021T8.txt");
    while(f >> c)
    {
        if(c % 2 != 0)
            if(a == 0)
                a = c;
            else if(b == 0)
                b = c;
            else
                {
                    a = b;
                    b = c;
                }
    }
    if(a * b == 0)
        cout<<"nu exista";
    else
        cout<<a<<" "<<b;
    f.close();
    return 0;
}
/*
///Varianta NEEficienta
 ifstream f("d:\\FisiereCPP\\TA2021T8.txt");
    while(f >> x)
    {
        if(x % 2 == 1)
        {
            contor++;
            v[contor] = x;
        }
    }
     cout<<v[contor - 1]<<" "<<v[contor];
    f.close();
*/