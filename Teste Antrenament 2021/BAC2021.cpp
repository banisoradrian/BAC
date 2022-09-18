#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void divPrim(long int n , unsigned int &s)
{
    s = 0;
    unsigned int div = 2 , p = 0;
    while(n != 1)
    {
        while(n % div == 0)
        {
            p++;
            n = n / div;
        }
        if(p != 0 && p % 2 == 1)
            s = s + div;
        div++;
        p = 0;
    }
}
unsigned int x , a , b , n1 , n2;
int main()
{
   ifstream f("d:\\FisiereCPP\\bac2021.txt");
   f >> x >> a;
   while(f >> b)
   {
        if(a % 1000 == x && b % 1000 == x)
        {
            n1 = a;
            n2 = b;
        }
        a = b;
   }
    if(n1 != 0 && n2 != 0)
        cout<<n1<<" "<<n2;
    else
        cout<<"nu exista";
    f.close();
    return 0;
}
/*
 unsigned int n , k , aux = 0 , contor = 0;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
    {
        char sir[11];
        cin >> sir;
        unsigned int lungime = strlen(sir) - 1;
        if(strchr("aeiou" , sir[lungime]) != 0)
        {
            if(contor < k)
            {
                contor++;
                aux = 1;
                cout<< sir<<" ";
            }
        }
    }
    if(aux == 0)
        cout<<"nu exista";
*/