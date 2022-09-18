#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ///Varianta Eficienta
    long int x , n = 0 , min1 = 99999999 , min2 = 999999999 , min3 = 999999999;
    ifstream f("d:\\FisiereCPP\\TA2020T14.txt");
    while(f >> x)
    {
        if(x % 100 == 20)
            if(x < min3)
            {
                min1 = min2;
                min2 = min3;
                min3 = x;
            }
            else if(x < min2)
            {
                min1 = min2;
                min2 = x;
            }
            else 
                min1 = x;
    }
    f.close();
    cout<<min3<<" "<<min2<<" "<<min1;
    return 0;
}
/*Varianta NEficienta
    long int x , n = 0 , v[100000000];
    ifstream f("d:\\FisiereCPP\\TA2020T14.txt");
    while(f >> x)
    {
        if(x % 100 == 20)
        {
             n++;
            v[n] = x;
        }
    }
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(v[i] > v[j])
                swap(v[i] , v[j]);
    for(int i = 1 ; i <= 3 ; i++)
        cout<<v[i]<<" ";
    return 0;

*/