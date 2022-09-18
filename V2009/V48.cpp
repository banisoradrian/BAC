#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;
int cmdiv(int x , int y)
{
    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
        if(y > x)
            y = y - x;
    }
    return x; // sau y
}

int main()
{   
    int n,i,nrFractii = 0;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 1 && n <= 100));
	
	for (i = 1; i <= n; i++) 
    {
		if (cmdiv(i,n) == 1)
			nrFractii++;
	}
	cout<<nrFractii;
    
    return 0;
}

/*
///Matricea
unsigned int n , i , j , k = 2;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 2 && n < 10));
    int A[n+1][n+1];
    for(i = 1 ; i <= n ; i++)
        for(j = 1 ; j <= n ; j++)
            {
                A[i][j] = k;
                k = k + 2;
            }
    for(i = 1 ; i <= n ; i++)
        {
            for(j = 1 ; j <= n ; j++)
                cout<<setw(5)<<A[i][j];
                cout<<endl;
        }
        */