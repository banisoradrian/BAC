#include <iostream>
#include <fstream>
using namespace std;

int sum(int x)
{
    int suma = 0;
    for(int i = 2 ; i < x ; i++)
        if(x % i == 0)
            suma = suma + i;
     return suma;
}


int main()
{
    unsigned int n  , nr;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 0 && n < 100));
    int v[n];

    for(int i = 1 ; i <= n ; i++)
    {
         do
         {
             cout<<"Citeste nr: "<<i<<endl;
             cin >> nr;
         }
         while(!(n > 0 && n <= 9999));

         // sau cin >> nr; 
         v[i] = sum(nr);
    }
    
    for(int i = 1 ; i < n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(v[i] > v[j])
                swap(v[i] , v[j]);

    for(int i = 1 ; i <= n ; i++)
        cout<<v[i]<<" ";
    
        




    /*
    int n , x , a = 54321;
    ifstream f("d:\\FisiereCPP\\V35.txt");
    f >> n;
   while(f >> x)
    {
        int pc = x;
        while(pc > 9)
            pc /= 10; 
        if(pc == x % 10)
        cout << x<<" ";
    }
    */
    
    return 0;
}