#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int cmmdc(int a , int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else if(b > a)
            b = b - a;
    }
    return a;
}

int main()
{  
   ifstream fin("d:\\FisiereCPP\\V53.txt");
	unsigned int n , aux;
	fin >> n;
    unsigned int v[n+1];
	for (int i = 1 ; i <= n; i++) 
		fin >> v[i];
    fin.close();
    ofstream fout("d:\\FisiereCPP\\V53.txt");
    fout << n <<endl;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            fout << v[j] << " ";
            fout << endl;
        aux = v[1];
        for(int t = 1 ; t <= n - 1; t++)
            v[t] = v[t + 1];
            v[n] = aux;
    }
    fout.close();
    return 0;
}

/*
 unsigned int n , a , b , contor = 0;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n > 1 && n < 300));
    for (a = 2; a < n; a++)
                for (b = a + 1; b <= n; b++)
                        if (cmmdc(a , b) == 1)
                                contor++;
        cout << contor;
*/