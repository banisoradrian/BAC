#include <iostream>
#include <fstream>
using namespace std;
int frecventa[10];
int main()
{
    ifstream fin("d:\\FisiereCPP\\#1005Numere8PbinfoIN.txt");
    unsigned int x;
    while(fin >> x)
        frecventa[x]++;
    fin.close();
    ofstream fout("d:\\FisiereCPP\\#1005Numere8PbinfoOUT.txt");
    for(int i = 9999 ; i >= 1 ; i--)
        {
            if(frecventa[i] == 0 && i <= 9999)
                fout<<i<<" ";
        }
    fout.close();
    
    return 0;
}