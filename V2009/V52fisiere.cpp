#include <iostream>
#include <fstream>
using namespace std;

int mult(int n, int a[401])
{
	for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j < n; j++)
			if (a[i] == a[j] && i != j)
				return 0;
			
	}
	return 1;
}
int main()
{ 
    int v[400], a , nrMaxim = 0;  
    ifstream f("d:\\FisiereCPP\\V52.txt");
    while (f>>a) 
    {
		v[nrMaxim++] = a;
		if (mult(nrMaxim,v) == 0) 
        {
			nrMaxim--;
			break;	
		}
	}
	cout<<nrMaxim;
    f.close();
    return 0;
}
/* /// Problema 4
unsigned int n , k , aux = 1;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 10000));
    do
    {
        cout<<"Citeste k: ";
        cin >> k;
    }
    while(!(k >= 1 && k <= 10000));
    int v[k];
    for(int i = 1 ; i <= k ; i++)
        cin >> v[i];
    for(int i = 1 ; i < n ; i++)
        for(int j = i + 1 ; j <= k ; j++)
            if(v[i] == v[j])
            {
                aux = 0;
                break;
            }
    if(aux) cout<<"Da";
    else cout<<"Nu";
*/