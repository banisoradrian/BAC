#include <iostream>

using namespace std;
void cif(int nr , int &s)
{
    s = 0;
    while(nr)
    {
        s = s + nr % 10;
        nr = nr / 10;
    }
}
int main()
{
     int n, v[100] , suma , sumMaxx = 0;
    do
    {
        cout<<"Citesteste n: ";
        cin >> n;
    }
    while(!(n > 0 && n < 25));
    for(int i = 1 ; i <= n ; i++)
        {
            cout<<"V["<<i<<"] = ";
            cin >> v[i];
            cif(v[i] , suma);
                if(suma > sumMaxx)
                    sumMaxx = suma;
        }
    for(int i = 1 ; i <= n ; i++)
        {
            cif(v[i] , suma);
                if(suma >= sumMaxx)
                    cout<<v[i]<<" ";
        }
    
    return 0;
}

/*
ifstream f("d:\\FisiereCPP\\V47.txt");
    unsigned int n , k , x = 0 , y = 0 , c , aux = 1;
    do
    {
        cout<<"Citeste k: ";
        cin >> k;
    }
    while(!(k > 0 && k < 50));
    f >> n;
    while(f >> x)
    {
        if(x != pow(k , y)) 
        {
            aux = 0;
            cout<<"NU";
            break;
        }
        else 
        {
            aux = 1;
            cout<<x<<" ";
        }
    }
    */