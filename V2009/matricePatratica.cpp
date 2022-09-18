#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i , j , n;
    cout<<"Citeste n: " ; cin >> n;
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n ; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
     cout<<"Afisarea matricei: "<<endl;
        for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
                 
             cout<<setw(5)<<A[i][j]<<" ";
              cout<<endl;
         }
         cout<<"Afisarea diagonalei principale: "<<endl;

          for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
             if(i == j)    
             cout<<A[i][j]<<" ";
            cout<<endl;
         }

         cout<<"Afisarea diagonalei secundare: ";

          for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
             if(i + j == n + 1)    
             cout<<A[i][j]<<" ";
            cout<<endl;
         }

     cout<<"Afisarea partii de sus matrice: ";

         for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
             if(i < j && i + j < n + 1)    
             cout<<A[i][j]<<" ";
            cout<<endl;
         }

    cout<<"Afisarea partii de jos a  matricei: ";

         for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
            if(i > j && i + j > n + 1)   
             cout<<A[i][j]<<" ";
             cout<<endl;
         }

    cout<<"Afisarea partii din dreapta a  matricei: ";

         for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
            if(i < j && i + j > n + 1)  
             cout<<A[i][j]<<" ";
             cout<<endl;
         }

    cout<<"Afisarea partii din stanga a  matricei: ";

         for(i = 1 ; i <= n ; i++)
        {
           for(j = 1 ; j <= n ; j++)
            if(i > j && i + j < n + 1)   
            cout<<A[i][j]<<" ";
            cout<<endl;
         }
    return 0;
}