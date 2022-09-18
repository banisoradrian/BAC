#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool DIST(int a[100], int n)
{
    int aux = 1 , i , j;
    for(i = 0 ; i <= n ; i++) // i <= n - 1
        for(j = i + 1 ; j <= n ; j++)
            if(a[i] == a[j])
                {
                    aux = 0;
                    break;
                }
    if(aux)
    for(i = 1 ; i <= n ; i++)
        if(a[i+1] - a[i] == 1 || a[i] - a[i+1] == 1)
    /*
        if(abs(i - j) == 1 || abs(j - i) == 1)   
           // if(abs(a[i] - a[j]) == 1 || abs(a[j] - a[i] == 1))

    */  
        {
            aux = 0;
            break;
        }
        
    if(aux) return true;
    else return false;
}   

int main()
{
    
    /*
    int n , a[100];
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >>a[i];
        if(DIST(a , n) == true) cout<<"da";
        else cout<<"NU";
    */

/* Varianta fara vector
    unsigned int n = 1 , c , maxx = 0;
    ifstream f("d:\\FisiereCPP\\V41.txt");
    f >> c;
    while(f >> c)
    {
        if(c > maxx) maxx = c;
            if(maxx == c) n++;
    }
    cout<<maxx<<" "<<n;
 */

///optim pe timp 
 ifstream f("d:\\FisiereCPP\\V41.txt");
    int n , maxx , frecventa;
    f >> n;
    f >> maxx;
    frecventa = 1;
    while(f >> n)
    {
        if(n > maxx)
        {
            maxx = n;
            frecventa = 1;
        }
        else
            if(n == maxx)
                frecventa++;
    }
    f.close();
    cout<<maxx<<" "<<frecventa;

/*
    /// neoptim pe timp
    ifstream f("d:\\FisiereCPP\\V41.txt");
    int n,frecventa[10],a,i;
	for (i = 0; i < 10; i++)
		frecventa[i] = 0;
	f>>n;
	while (f>>a) 
		frecventa[a]++;

	for (i = 9; i >= 0; i--)
		if(frecventa[i] != 0)
         {
			cout<<i<<" "<<frecventa[i];
			break;
		}
*/
        
	
    return 0;
}