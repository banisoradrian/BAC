#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void suma(long int n , unsigned int &s)
{
    unsigned int contor[10]={0};
    s = 0;
    while(n >= 2)
    {
        unsigned int c = n % 10;
        if(c % 2 == 0 && contor[c] == 0)
            {
                s = s + c;
                contor[c]++;
            }
        n = n / 10;
    }
}
int main()
{
    unsigned int x , contor = 1 , lmax = 0 , nrSecv = 0;
    ifstream f("d:\\FisiereCPP\\TA2020T18.txt");
    while(f >> x)
    {
        if(x % 10 == 0)
            contor++;
        else 
            contor = 0;
        if(contor > lmax)
           {
               lmax = contor;
               nrSecv = 1;
           }
        else if(contor == lmax)
            nrSecv++;
    }
    f.close();
    cout<<lmax<<" "<<nrSecv;
    return 0;
}

/*
    unsigned int n , k , lungimeCuv , lungimek , pozComp;
   char sir[21][21];
   bool aux = 0;
   cout<<"Citeste n : ";
   cin >> n >> k;
   for(int i = 1 ; i <= n ; i++)
    cin >> sir[i];
    lungimek = strlen(sir[k]);
   for(int i = 1 ; i <= n  ; i++)
        if(i != k)
        {
            lungimeCuv = strlen(sir[i]);
            pozComp = lungimeCuv - lungimek;
            if(strcmp(sir[k] , sir[i] + pozComp) == 0)
                {
                    aux = 1;
                    cout<<sir[i]<<" ";
                }
        }
   if(aux == 0)
    cout<<"nu exista";
*/