#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  unsigned int n , nr= 0 , k ;
  ifstream f("d:\\FisiereCPP\\V18S3.txt");
    cout<<"Citeste k = " ; cin >> k;

    while(f >> n)
        if(k < n)
        nr++;
    nr++;
         cout<<nr;
    if(k > n )
        cout<<"nu exista";

        return 0;
}
