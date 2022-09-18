#include <iostream>
#include <fstream>
using namespace std;
int frecventa[];
int main()
{

    ifstream f("d:\\FisiereCPP\\TAT42020.txt");
    int x , y , contor = 0 ,aux = 0;
     f >> x;
        while(f >> x)
        {
             if(x == y)
                contor++;
             else
            {
                if(contor == 1)
                    cout<< y <<" ";
                 contor = 0;
            }
            y = x;
        }
        if(contor == 1)
        cout<< x;
    return 0;
} 


/* Varianta neeficienta
int c;
    ifstream f("d:\\FisiereCPP\\TAT42020.txt");
    while(f >> x)
        frecventa[x]++;
    f.close();
    for(int i = 1000000 ; i >= 1 ; i--)
        {
            if(frecventa[i] == 2)
                cout<<i<<" ";
        }
*/