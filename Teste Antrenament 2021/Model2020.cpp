#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void duplicare(int n , int &d)
{
    d = 0;
    int aux = -1 , c , p = 1;
    while(n)
    {
        c = n % 10;
        d = c * p + d;
        p = p * 10;
        if(n % 2 == 1)
        {
            aux = 1;
            d = c * p + d;
            p = p * 10;
        }
        n = n / 10;
    }
    if(aux == -1)
        d = aux;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\bac2020model.txt");
    int n , x , v[100] ={0} ,fr[100] ={0}, a = 0 , contor = 0;
    f >> n;
    while(f >> x)
    {
        a++;
        v[a] = x;
        fr[x] = 1;
    }
    for(int i = 1 ; i <= n ; i++)
        if(fr[i] != 1)
            contor++;
    cout << contor;
    return 0;
}
/*
  char s[101] = " el mergea tot spre aleea pietruita" , s2[101] = " ";
    strcpy(s2 , s);
    int n = 5 , contor , aux = 0;
    char *cuvant = strtok(s , " ");
    while(cuvant)
    {
            if(strlen(cuvant) >= n)
            {
                aux = 1;
                cout<<cuvant<<endl;
            }
        cuvant = strtok(NULL , " ");
    }
    cuvant = strtok(s2 , " ");
    while(cuvant)
    {
        if(strlen(cuvant) < n)
            cout<<cuvant<<endl;
        cuvant = strtok(NULL , " ");
    }
    if(aux == 0)
        cout<<"nu exista";
*/