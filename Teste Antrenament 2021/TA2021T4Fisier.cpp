#include <iostream>
#include <fstream>
using namespace std;
unsigned int v[10000000] , frecventa[10000000];
int main()
{
    ///Varianta Eficienta
    unsigned int n1 , n2 , a , b;
    ifstream f1("d:\\FisiereCPP\\TA2021T4NR1.txt");
    ifstream f2("d:\\FisiereCPP\\TA2021T4NR2.txt");
     f1 >> n1;
     f2 >> n2;
        /// var a si n oricum nu le vom  folosim , le citim doar pentru a scapa de ele
    while(!f1.eof() && !f2.eof()) // while(f1 && f2)
    {
        if(n1 % 5 != 0)
            f1 >> n1;
        if(n2 % 5 != 0)
            f2 >> n2;
        if(n1 % 5 == 0 && n2 % 5 == 0)
        {
            if(n1 < n2)
            {
                cout<<n1<<" ";
                f1 >> n1;
            }
            else if(n1 > n2)
            {
                cout<<n2<<" ";
                f2 >> n2;
            }
            else
            {
                f1 >> n1;
                f2 >> n2;
            }
        }
        if(n1 % 5 == 0 && !f2.eof())
        {
            cout<<n1<<" ";
            f1 >> n1;
        }
        if(n2 % 5 == 0 && !f1.eof())
        {
            cout<<n2<<" ";
            f2 >> n2;
        }
    }
    f1.close();
    f2.close();
  return 0;
    
}
/*
VARIANTA NEEFICIENTA
unsigned int x , n1 , n2 , m , n , nrcif = 0;
    ifstream f1("d:\\FisiereCPP\\TA2021T4NR1.txt");
    ifstream f2("d:\\FisiereCPP\\TA2021T4NR2.txt");
    f1 >> m;
    f2 >> n;
    /// var m , n oricum nu le folosim , citim doar primele valori pentru a scapa de ele
    while(f1 >> x)
    {
        if(x % 5 == 0)
        {
        nrcif++;
        v[nrcif] = x;
        frecventa[x]++;
        }
    }
    while(f2 >> x)
    {
       if(x % 5 == 0)
        {
        nrcif++;
        v[nrcif] = x;
        frecventa[x]++;
        }
    }
    for(int i = 5 ; i <= 10000000 ; i++)
        if(frecventa[i] == 1)
            cout<<i<<" ";
  f1.close();
  f2.close();+2
*/