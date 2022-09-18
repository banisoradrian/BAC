#include <iostream> 
#include <fstream>
using namespace std;
void cmax(int a , int &b)
{
    b = a % 10;
    a = a / 10;
    while(a)
    {
        if(a % 10 > b)
        
            b = a % 10;
            a = a / 10;
        
    }
}
int main()
{   
    ifstream f("d:\\FisiereCPP\\V49.txt");
    int a , b , n , Cifmax = -1 , NRmin = 30000;
    f >> n;
    while(f >> a)
    {
        cmax(a , b);
        if(b > Cifmax)
        {
            Cifmax = b;
            NRmin = a;
        }
        else if(b == Cifmax && a < NRmin)
            NRmin = a;
    }
    cout<<Cifmax<<"  "<<NRmin;
    
    return 0;
}