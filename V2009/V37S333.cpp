#include <iostream>
#include <fstream>
using namespace std;

int nrdiv(int x)
{
    int nrdp=0,p=2,rez=x,aux;
    while(x>1 && p<=rez/2)
    {
        aux=0;
        while(x%p==0)
            {
                x=x/p;
                aux=1;
            }
        if(aux)
            nrdp++;
        p++;
    }
    return nrdp;
}
int main()
{
    ifstream f("d:\\FisiereCPP\\V37.txt");

    int nr , val = 0 , aux = 0;
    f >> nr;
    while(f >> nr)
       if(nrdiv(nr) % 2 == 0 && nrdiv(nr))
          {
             cout<<nr<<" ";
             aux = 1;
             break;
          }
     while(f >> nr)
       if(nrdiv(nr) % 2 == 0 && nrdiv(nr))
          {
              val = nr;
              aux = 1;
              
          }
    if(val)
        cout<<val;
    if(!aux)
        cout<<"Nu exista!"<<endl;
    return 0;
}