#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
void patrate(unsigned int x , unsigned int y)
{
    unsigned int suma = 0;
    for(int i = x ; i <= y ; i++)
    {
        if((int)sqrt(i) == sqrt(i))
        {
            if(suma == 0)
            {
                cout << i;
                suma = suma + i;
            }
            else
            {
                cout<<" + "<< i ;
                suma = suma + i;
            }
        }
    }
        if(suma != 0)
            cout<<" = "<<suma;
        else
            cout<<"nu exista"; 
}
int main()
{
    
    
    char s[101];
    cout<<"Citeste sirul : ";
    cin.get(s , 101);
    char *cuvant = strtok(s , " ");
    while (cuvant)
    {
        for(int i = 0 ; i < strlen(cuvant) ; i++)
        {
            if(cuvant[i] >= 'A' && cuvant[i] <= 'Z')
                cuvant[i] = cuvant[i] + 32;
            if(cuvant[0] >= 'a' && cuvant[0] <= 'z')
                cuvant[0] = cuvant[0] - 32;
        }
       cout<<cuvant<<" ";
       cuvant = strtok(NULL , " ");
    }
    //Sirul citit: ABIA aSTept sa Merg lA scoala
    return 0;
}
