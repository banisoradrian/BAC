#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
/*
int p(int n , int a[100])
{
    int suma = 0;
    for(int i = 2 ; i <= n ; i = i + 2)
       {
         if(a[i] % 2 == 1)
            suma = suma + a[i];
       }
    return suma;
}
*/
int cifre[10];
int main()
{
    /*
   int n,a[101],i;
   cout<<"Citeste n:"; cin>>n;
	for (i = 1; i <= n; i++)
            cin>>a[i];
    cout<<p(n,a);
    */

   ifstream f("d:\\FisiereCPP\\V43.txt");
   int  n,  cf  , nr = 0; // cifra
   f >> n;
   while(f >> cf)
        cifre[cf]++;
    f.close();
    for(int i = 9 ; i >= 0 ; i--)
        if(cifre[i])
            for(int j = 1 ; j <= cifre[i] ; j++)
                nr = nr * 10 + i;
    cout << nr;



    //PROBLEMA MATRICE
    /*
    unsigned int i , j , n;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 0 && n <= 23));
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                if(i == j) A[i][j] = 2;
                else if(i < j) A[i][j] = 1;
                else if(i > j) A[i][j] = 3;
        }
    
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<"\n";
        }
        */
    return 0;
}