#include <iostream>
#include<fstream>
using namespace std;
void rest(unsigned int x , unsigned int y , unsigned int n , unsigned int &k)
{
    for(int i = n ; i >= 1 ; i--)
    {
        if(i % x == 2 && i % y == 2)
            {
                k = i;
                break;
            }
        else
            k = 0;
    }
}
int main()
{   unsigned int k;
    rest(10 , 101 , 3000 , k);
    cout<<k<<endl;
   long x , y , contor = 1;
   ifstream f("d:\\FisiereCPP\\TA2020T11.txt");
   f >> x;
   while(f>>y)
    { 
        if(x == y) 
             contor++;
        else 
        { 
            cout<<x<<" "<<contor<<" ";
            contor = 1;
        }
      x = y;
    }
    f.close();
  cout<<x<<" "<<contor;
    return 0;
}