#include <iostream>
#include <fstream>
using namespace std;
/*
int sdiv(int y)
{
    int suma = 0;
    for(int i = 1 ; i <= y ; i++)
        if(y % i == 0)
            suma = suma + i;
    return suma;
}
*/
int main()
{
    int n , aux = 1;
    cout<<"Citeste n: ";
    cin >> n;
    cout<<"sdiv("<<n<<")"<<" "<<sdiv(n)<<endl;
   for(int i = 2 ; i <= n / 2 ; i++)
        if(sdiv(n) % i == 0)
            {
                aux = 0;
                break;
            }
        
        if(aux == 1) cout<<"Da";
        else cout <<"NU";
            

            // sdiv(4) = 1 2 4
   
  // 1 2 3 6 9

    /*
    ifstream f("d:\\FisiereCPP\\V40.txt");
    int n , x , mpar = 0 , mimp = 9999 , aux = 1 , i;
  f >> n;
  for (i = 1 ; i <= n ; i++)
   {
        f >> x;
        if (x % 2 == 0)
        if (x >= mpar)
            mpar = x;
        else
            aux = 0;
        else if (x <= mimp)
        mimp = x;
        else
        aux = 0;
  }
  if (aux) cout << "DA";
  else cout << "NU";
*/
    return 0;
}