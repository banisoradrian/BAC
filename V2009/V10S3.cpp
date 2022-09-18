#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("d:\\FisiereCPP\\V10S3.txt");

    unsigned int tip, pret, cantitate, maxim=0;
    int v[200000];

    while (f >> tip >> pret >> cantitate)
    {
        if (maxim < tip) maxim = tip;
        v[tip] = v[tip] + pret * cantitate;
    }

    for (int i=1; i<=maxim; i++)
    {
        if (v[i] != NULL) cout << i << " " << v[i] << endl;
        else cout << i << " " << 0 << endl;
    }

    return 0;
}
