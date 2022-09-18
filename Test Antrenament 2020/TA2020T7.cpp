#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int putere(int n , int p)
{
    int div = 2 , pmax;
    while(n != 1)
    {
        pmax = 0;
        while(n % div == 0)
        {
            n = n / div;
            pmax++;
        }
        if(pmax != 0 && div == p)
            return pmax;
        else
            div++;
    }
    return -1;
}

int main()
{
    int x , suma = 0, sumaMin = 9999;
    ifstream f("d:\\FisiereCPP\\TAT72020.txt");
    while(f >> x)
    {
        if(suma < 0)
            suma = suma + x;
        else
            suma = x;
        if(suma < sumaMin)
            sumaMin = suma;
    }
    f.close();
    cout<<sumaMin;
    return 0;
}

/*

 int i , j , m , n , aux = 0;
    cout<<"Citeste m , n :";
    cin >> m >> n;
    int A[m+1][n+1];
   
    for(i = 1 ; i <= m ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<"A["<<i<<"]["<<j<<"] = ";
                cin >> A[i][j];
        }

    for(i = 1 ; i <= m ; i++)
            for(j = 1 ; j <= n ; j++)
                {
                    if(A[i][1] == A[j][n])
                    {
                       aux = 1;
                       cout<<A[i][1]<<" ";
                    }
                }
    if(aux == 0)
        cout<<"nepolarizate";

*/