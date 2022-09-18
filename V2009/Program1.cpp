#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("d:\\FisiereCPP\\fisier1.txt");
    char linie[256];

    for(int i=1;i<=3;i++)
    {
        cout<<"Citeste linie :"<<i<<endl;
        cin.get(linie,256);
        cin.get();
        f<<linie<<endl;
    }
    f.close();
    ifstream g("d:\\FisierCPP\\fisier1.txt");
    while(g.get(linie,256))
    {
        cout<<linie<<endl;
        g.get();
    }
    g.close();
    return 0;
}