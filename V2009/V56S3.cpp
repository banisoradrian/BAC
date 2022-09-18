#include <iostream> 
#include <fstream>
using namespace std;
bool prim(int x)
{   
    if(x < 2) return false;
    for(int i = 2 ; i <= x / 2 ; i++)
        if(x % i == 0)
            return false;
    return true;
}
void numar(int x , int &nrp)
{
	nrp = 1;
	for (int i = 2 ; i < x ; i++)
    
		if (prim(i))
            nrp++;
			//    cout<<i<<" ";
	
}
int main()
{
  //  int x = 23 , nrp = 1;
   // cout<<prim(x)<<endl;
   // numar(x , nrp);
   // cout<<nrp;

    int a , b , aux = 1 , nra , nrb;
    cout<<"Citeste valori pentru a si b :";
    cin >> a >> b;
    if(b > a) swap(a , b);
    numar(b, nrb);
    numar(a, nra);

    if(nrb - nra) cout<<"DA";
    else cout<<"NU";
    return 0;
}

/*
ifstream f("d:\\FisiereCPP\\V57.txt");
    unsigned int n , x , v[1000];
    while(f >> x)
    {
        if(x % 2 == 0)
        {
            n++;
            v[n] = x;
        }
    }
    if(n)
    {
        for(int i = 1 ; i < n ; i++)
            for(int j = i + 1 ; j <= n ; j++)
                if(v[i] > v[j])
                    swap(v[i] , v[j]);
    }
    else cout <<"Nu exista !";
    for(int i = 1 ; i <= n ; i++)
        cout<<v[i]<<" ";
*/