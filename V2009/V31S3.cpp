#include <iostream>
#include <fstream>
using namespace std;

int suma(int x[100] , int n , int m)
{
    // Sortam elementele in ordine crescatoare 
    // pentru a putea face suma primelor m elemente mici din vector
    for(int i = 1 ; i <= n - 1 ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(x[i] > x[j])
                swap(x[i] , x[j]);
    // parcurgem vectorul x pana la pozitia m 
    //realizand suma numerelor pana la acea pozitie
    int s = 0;
    for(int i = 1 ; i <= m ; i++)
        s = s + x[i];   
        return s;         
}
int main()
{
/*
  int n , x[100];
  cout<<"Citeste n: ";
  cin >> n;

  for(int i = 1 ; i <= n ; i++)
     cin >> x[i];
  cout<<suma(x , n , 4);
*/
    ifstream f("d:\\FisiereCPP\\V31.txt");
    int maxX , minY , n , x , y;
    f >> n >> x >> y;
    maxX = x;
    minY = y;
    while(f >> x >> y)
    {
        if(x > maxX) maxX = x;
        if(y > minY) minY = y;
    }
    if(maxX < minY) 
        cout<<maxX<<" "<<minY;
    else cout << 0;
    return 0;
}