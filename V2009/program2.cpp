#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("d:\\FisiereCPP\\fisier2.txt");
    char ch;
    cout<<"Simbol:"<<endl;
    cin>>ch;
    while(ch!='*')
    {
        f<<ch<<" ";
        cout<<"Simbol:"<<endl;
        cin>>ch;
    }
    f.close();
    fstream g("d:\\FisiereCPP\\fisier2.txt");
    while(g>>ch)
    {
        cout<<" "<<ch;
    }
    g.close();

    return 0;
}