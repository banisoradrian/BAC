#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("d:\\FisiereCPP\\Citirea liniilor din program si afisarea in fisier.txt");
    char linie[256];

    for(int i=1;i<=3;i++)
    {
        cout<<"Citeste linie :"<<i<<endl;
        cin.get(linie,256);
        cin.get();
        f<<linie<<endl;
    }
    f.close();
    ifstream g("d:\\FisierCPP\\Citirea liniilor din program si afisarea in fisier.txt");
    while(g.get(linie,256))
    {
        cout<<linie<<endl;
        g.get();
    }
    g.close();
    return 0;
}