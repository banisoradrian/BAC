#include <iostream>
#include <fstream>
using namespace std;

void p(unsigned int &n , int c)
{
    int rez = 0 , p = 1;
    while(n > 0)
     {
         if(c != n % 10)
            {
                rez = rez + p * (n % 10);
                p = p * 10;
            }
            n = n / 10;
     }
     n = rez;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\V13IN.txt");
    ofstream g("d:\\FisiereCPP\\V13OUT.txt");
   unsigned int n;

    while(f >> n)
    {

                for(int i = 1 ; i <= 9 ; i += 2)
                    p(n , i);

                if(n)
                     cout<< n <<" ";
    }
    cout<<"gg";
    f.close();
    g.close();

    return 0;
}


