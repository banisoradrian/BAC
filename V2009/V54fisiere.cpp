#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
    ifstream f("d:\\FisiereCPP\\V54.txt");
    unsigned int n , i , j ,  k , contor = 0;
    f >> n;
    unsigned int v[n];
    for(int i = 1 ; i <= n ; i++)
        f >> v[i];
    f.close();
     for (i = 1 ; i <= n; i++)
          for (j = 1 ; j <= n; j++)
               for (k = j + 1 ; k <= n ; k++)
                    if (v[j] + v[k] == v[i])
                         contor++;

    cout<<contor;
    return 0;
}