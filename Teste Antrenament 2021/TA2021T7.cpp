#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void afisare(unsigned int x , unsigned int y , unsigned int k)
{
    unsigned int contor = 0;
    for(int i = x ; i <= y ; i++)
    {
        contor++;
        cout<<i<<" ";
        if(contor == k)
            {
                cout<<"* ";
                contor = 0;
            }
        if(i == y && contor != k)
            cout<<"* ";
    }
}
int main()
{
    unsigned int x , contor = 0 , aux = 0;
    ifstream f("d:\\FisiereCPP\\TA2021T7.txt");
    while(f >> x)
    {
        if(x % 2 == 0)
            {
                aux = 1;
                cout<<x<<" ";                
            }
    }
    if(aux == 0)
        cout<<"nu exista";
    f.close();
    return 0;
    
}
/*

*/