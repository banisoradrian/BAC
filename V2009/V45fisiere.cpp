#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     int n,i,j , aux = 1;
	cin>>n;

	int v[100];
	
	for (i = 0; i < n; i++)
		cin>>v[i];
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                if(v[i] == v[j])
                    {
                        aux = 0;
                        break;
                    }
            if(v[i] != v[j])
            {
                aux = 1;
                cout<<v[i]<<" ";
            }
        }
    return 0;
}