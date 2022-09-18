#include <iostream>
#include <fstream>
using namespace std;

void p(unsigned int &n , int c)
{
    int nr = 0 , p = 1 , cf;
    while(n > 0)
    {
        cf = n % 10;
        if(cf != c)
        {
            nr = nr + p * cf;
            p = p * 10;
        }
        n = n / 10;
    }
    n = nr;
}
int main()
{
    /*
    unsigned int n = 123;
    p(n , 2);
    cout<<n;
    */
    ifstream f("d:\\FisiereCPP\\V13S3in.txt");
    ofstream g("d:\\FisiereCPP\\V13S3out.txt");
    unsigned int n;
    while( f >> n)
    {

        for (int i = 1; i <= 9; i += 2) // eliminam cifrele impare din numar
            p(n, i);

        if (n > 0) // daca numarul este diferit de 0 il introducem in fisier
            g << n << " ";

    }
    cout<<"hh";
    g.close();
    f.close();
        return 0;
}
