#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("d:\\FisiereCPP\\TAT220.TXT");
   unsigned int x , max1 = 0 , max2 = 0 , max3 = 0;
   while(f >> x)
       if(x % 10 == 0 && x / 10 % 10 == 2) // if(x % 100 == 20)
            if(x > max3)
            {
                max1 = max2;
                max2 = max3;
                max3 = x;
            }
            else if(x > max2)
            {
                max1 = max2;
                max2 = x;
            }
            else if(x > max1)
                max1 = x;
   f.close();
    cout<<max1<<" "<<max2<<" "<<max3;
   
    return 0;
}

/*
char sir[101] , sirRezerva[101];
    cout<<"Citeste sirul :";
    cin.get(sir , 101);
    char *cuvant = strtok(sir , " ");
    while(cuvant)
    {
        if(cuvant[0] != '-')
        {
            strcat(sirRezerva , cuvant);
            strcat(sirRezerva , " ");
        }
        cuvant = strtok(NULL , " ");
    }
    strcpy(sir , sirRezerva);
    cout<<sir;
*/








/*
Varianta neeficienta dpdv al timupui de executie si al memoriei
 unsigned int contor = 0 , c , v[100] , i , j;
    ifstream f("d:\\FisiereCPP\\TAT220.TXT");
    while(f >> c)
    {
        if(c % 100 == 20)
        {
            contor++;
            v[contor] = c;
        }
    }
    f.close();
    for(i = 1 ; i <= contor ; i++)
        for(j = 1 ; j <= contor ; j++)
            if(v[i] > v[j])
                swap(v[i] , v[j]);
    for( i = 1 ; i <= contor ; i++)
    {
        cout<<v[i+2]<<" "<<v[i+1]<<" "<<v[i];
        break;
    }

    */