#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int cif[100];
int cifra(unsigned int a)
{
    int cifraPara = 0 , aux = 0;
    while(a > 0)
    {
        cifraPara = a % 10;
        a = a / 10;
        if(cifraPara % 2 == 0)
        {       aux = 0;
                break;
        }
    }
    if(cifraPara % 2 == 1)
        return -1;
    else
         return cifraPara;
}
int main()
{
   unsigned int n , aux = 0;
   ifstream f("d:\\FisiereCPP\\V36.txt");
   f >> n;
   while(f >> n)
      cif[cifra(n)]++;
   f.close();

   for(int i = 8 ; i >= 0 ; i = i - 2)
      if(cif[i] > 0)
      {
          aux = 1;
          for(int j = 1 ; j <= cif[i] ; j++)
             cout << i;
      }
      if(aux == 0)
        cout <<"NU EXISTA";

    /*
    //PROBLEMA MATRICEA
    unsigned int n , m , i , j , min;
    do
    {
        cout<<"Citeste n = ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 30));
    do
    {
        cout<<"Citeste m = ";
        cin >> m;
    }
    while(!(m >= 1 && m <= 30));
    int A[n+1][m+1];

    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= m ; j++)
            {
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
            }

    for(i = 1 ; i <= n ; i++)
        {   
         for(j = 1 ; j <= m ; j++)
            cout<<setw(5)<<A[i][j];
            cout<<endl;
        }

    for(j = m ; j >= 1 ; j--)
        {   
         min = A[1][j];
         for(i = n ; i >= 1 ; i--)
            if(A[i][j] < min)
                min = A[i][j];
                cout<<min<<" ";
        }
        */
    return 0;
}