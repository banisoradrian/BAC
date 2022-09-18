#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;
void patrate(long int n , int &x , int &y)
{
    bool aux = 0;
    for(int i = 2 ; i * i <= n && !aux ; i++)
        for(int j = i + 1 ; j * j <= n && !aux ; j++)
            if((i*i) * (j*j) == n)
                {   
                        aux = 1;
                        x = i;
                        y = j;
                }
           else
           {
               aux = 0;
               x = y = 0;
           }
                
}
int main()
{
    ifstream f("d:\\FisiereCPP\\SesiuneSpeciala2022.txt");
    unsigned int x , y , contor = 0 , contorMax = 0;
    f >> x;
    while(f >> y)
    {
        if(x == y)
            contor++;
        else if(contor > contorMax)
            contorMax = contor;
        else
            contor = 1;
            x = y;
    }
    f.close();
    cout<<contorMax-1;
    return 0;
}
/*
  unsigned int i , j , n;
   do
   {
       cout<<"Citeste n: ";
       cin >> n;
   }
   while(!(n >= 2 && n <= 100));
   unsigned int A[n+1][n+1];
   for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
    }
     for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<"\n";
    }

    cout<<endl;

    for(i = 1 ; i <= n ; i++)
        for(j = i ; j <= n - 1 ; j++)
            A[i][j] = A[i][j+1];
    
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n - 1 ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<"\n";
    }
*/