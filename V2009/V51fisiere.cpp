#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("d:\\FisiereCPP\\V51.txt");
    unsigned int n , x; // n contor
    f >> x;
    int v[x] , aux = 0;
    while(f >> x)
    {
        n++;
        v[n] = x;
    }
    f.close();
    for(int i = 1 ; i < n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(v[i] % 2 == 0 && v[j] % 2 == 0 || v[i] % 2 == 1 && v[j] % 2 == 1)
            {
                aux = 1;
                cout <<v[i]<<" "<<v[j]<<endl;
            }
    if(aux == 0) cout<< 0;
    return 0;
}