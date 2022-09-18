#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void cifre(int nr , int &nc, int &sc)
{
    nc = 0,
    sc = 0;
    while(nr)
    {
        sc = sc + nr % 10;
        nr = nr / 10;
        nc++;
    }
}
int main()
{ 
    long int n;
    int nc , sc , aux = 0;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 10 && n <= 1000000000));
    cifre(n , nc , sc);
    
    while(n)
    { 
        if(n % 10 == sc / nc)
        
            aux = 1;
            n = n / 10;
        
    }
    if(aux)
            cout<<"Da";
    else
            cout<<"NU";
    
/*
    ifstream f("d:\\FisiereCPP\\V46.txt");
    unsigned int n , nr = 0, x , k , v[101];
   
    do
    {
        cout<<"Citeste k :";
        cin >> k;
    }
    while(!(k > 0 && k <= 25));
    f >> n;
    while(f >> x)
    {
        int nrDiv = 0;
        for(int i = 2 ; i <= 9999 ; i++)
            if(x % i == 0)
                nrDiv++;
            if(nrDiv >= k)
            {
                v[nr] = x;
                nr++;
            }
      }
      f.close();
      for(int i = 0 ; i < nr ; i++)
        cout<<v[i]<<" ";
*/
    return 0;
}



/*
char s[101] , vocale[] = "aeiou";
    cout<<"Citeste sirul : ";
    cin.get(s , 101);
    for(int i = 0 ; i < strlen(s) ; i++)
        {
            if(strchr(vocale , s[i]))
                s[i] = s[i] + 1;
        }
    cout << s;
    */