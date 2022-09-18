#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
unsigned int suma(unsigned int a , unsigned int b)
{
    unsigned int suma = 0 , n;
    if(a > b)
        n = a;
    else
        n = b;
    for(int i = 1 ; i <= n ; i++)
        if(a % i == 0 && b % i == 0)
            suma = suma + i;
    return suma;
    
}
unsigned int frecventa[1000];
int main()
{
   char sir[101] , sirNou[101] = {0} , x;
   unsigned int n;
   bool aux = 0;
   cin.get(sir , 101);
   char *cuvant = strtok(sir , " ");
   while(cuvant)
   {
       n = strlen(cuvant);
       if(n >= 3)
       {
           aux = 1;
           x = cuvant[0];
           for(int i = 1 ; i < n ; i++)
                cuvant[i-1] = cuvant[i];
                cuvant[n-1] = x;
       }
       strcat (sirNou , cuvant);
       strcat(sirNou , " ");
       cuvant = strtok(NULL , " ");
   }
   strcpy(sir , sirNou);
   if(aux == 0)
        cout<<"Nu exista";
    else
        cout<<sir;
    return 0;
}
/*
unsigned int x , contorImpar = 0;
   ifstream f("d:\\FisiereCPP\\bac2020.txt");
   while(f >> x)
       frecventa[x]++;
    f.close();
    for(int i = 1 ; i <= 1000 ; i++)
        if(frecventa[i] % 2 == 1)
            contorImpar++;
    if(contorImpar > 1)
        cout<<"NU";
    else
        cout<<"DA";
*/