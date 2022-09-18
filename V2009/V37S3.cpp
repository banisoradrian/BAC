#include <iostream>
#include <fstream>


using namespace std;
/*
    !!!ALTA VARIANTA DE SUBPROGRAM!!!
int nrdiv(int x)
{
    int nrdp = 0 , p = 2 , rez = x , aux;
    while(x > 1 && p <= rez / 2)
    {
        aux = 0;
        while(x % p == 0)
            {
                x = x / p;
                aux = 1;
            }
        if(aux)
            nrdp++;
        p++;
    }
    return nrdp;
}
*/
int nrdiv(int x)
{ 
    int d = 2 , p = 0;
    while(x > 1)
        if(x % d == 0) 
        { 
            p++;
            while(x % d == 0) 
                x = x / d;
        } 
            else 
                d++;
	return p;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\V37.txt");
    int nr , i = 1 ;
     f >> nr;
    int v[nr+1];
    while(f >> nr)
    {
        v[i] = nr;
        i++;
    }
    i--;
    f.close();

    for(int j = 1 ; j <= i ; j++)
      if(nrdiv(v[j]) % 2 == 0 && nrdiv(v[j]) != 0)
        {
            cout << v[j] <<"  ";
            break;
        }
    for(int j = i ; j >= 1 ; j--)
      if(nrdiv(v[j]) % 2 == 0 && nrdiv(v[j]) != 0)
        {
            cout << v[j];
            break;
        }
    


    return 0;
}