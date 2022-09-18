#include <iostream>
#include <fstream>
using namespace std;
int frecventa[1000000];
int main()
{
    ifstream f("d:\\FisiereCPP\\#187CifFrecv.txt");
    unsigned int x , n = 0 , frecventamax = 0;;
    while(f >> x)
    {
        for(int i = 2 ; i <= x / 2 ; i++)
            if(x % i != 0)
                frecventa[x]++;
            n++;
    }
    f.close();
    for(int i = 1 ; i <= n ; i++)
    {
        if(frecventa[i] > frecventamax)
            {
                frecventamax = frecventa[i];
                cout<<i<<" "<<frecventamax;
                break;
            } 
    }

    return 0;
}