#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    unsigned int n  ;
    int n1 , nr = 0;
    ifstream f("d:\\FisiereCPP\\V17S3.txt");
    f >> n >> n1;
    while(f >> n)
        if(n < n1)
        nr++;
    nr++;
    cout<<nr;
    return 0;
}
