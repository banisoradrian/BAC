#include <iostream>
#include <fstream>
using namespace std;

void inter(int &x , int &y)
{
    swap(x , y);
}
int main()
{
   ifstream fin("d:\\FisiereCpp\\V38.txt");
   unsigned int n , c;
   fin >> c;
   int v[c];
   while(fin >> c)
   {    
       n++; // contor
       v[n] = c;
   }
    fin.close();
    for(int i = 1 ; i <= n - 1 ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(v[i] > v[j])
                inter(v[i] , v[j]);
    
    for(int i = 1 ; i <= n ; i++)
        cout<<v[i]<<" ";
    
    return 0;
}