#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int contor[10];
void produs(long int n , int &p)
{
    p = 1;
    int aux = 0;
    while(n)
    {
        int c = n % 10;
        if(c % 2 == 0 && contor[c] == 0)
        {
            aux = 1;
            contor[n%10]++;
            p = p * c;
        }
        n = n / 10;
    }
   if(aux == 0)
    p = -1;
}
int main()
{
    char s[101] , v[20][50];
    int i , n = 0 , aux = 0;
    cout<<"Citeste sirul : ";
    cin.get(s , 101);
    char *cuvant = strtok(s , " ");
    while(cuvant)
    {
        n++;
        strcpy(v[n] , cuvant);
        cuvant = strtok(NULL , " ");
    }
    strcpy(s , v[1]);
    for(int i = 2 ; i <= n ; i++)
         if(v[i][strlen(v[i]) - 1] == v[i - 1][strlen(v[i-1])-1])
            {
                aux = 1;
                strcat(s , " ");
                strcat(s , "succes ");
                strcat(s , v[i]);
            }
          else
            {
                strcat(s , " ");
                strcat(s , v[i]);
            }
    if(aux == 1)
        cout<<s;
    else
        cout<<"Nu exista";
    return 0;
}