#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int suma(int n)
{
    int s = 0;
    int divizor = 2 , putere = 0;
    while(n != 1)
    {
        while(n % divizor == 0)
        {
            putere++;
            n = n / divizor;
        }
       
        if(putere != 0)
            s = s + divizor;
        divizor++;
        putere = 0;
    }
    return s;
}
/// SAU
/*

    int s = 0;
    int div = 2;
    while(n > 1)
    {
        if(n % div == 0) 
        {   s = s + div;
            while(n % div == 0)
                  n= n / div;
        }
        div++;
        if(n > 1 && div * div > n)
            div = n;
    }
    return s;

*/
int maxim , citire , frecventaAparitii[10] , frecventaNr[10];
int main()
{
    ifstream f("d:\\FisiereCPP\\TAT82020.TXT");
    int x , i;
    while(f >> x)
    {
        citire++;
        frecventaAparitii[x%10]++;
        frecventaNr[x%10] = citire;
        if(frecventaAparitii[x%10] > maxim)
            maxim = frecventaAparitii[x%10];
    }
    f.close();
    for(i = 0 ; i <= 9 ; i++)
    {
        if(frecventaAparitii[i] == maxim)
            cout<<frecventaNr[i] << " ";
    } 
return 0;
}