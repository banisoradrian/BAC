#include <iostream>
#include <fstream>
using namespace std;
int frecventa[9999];
int main()
{
    ifstream fin("d:\\FisiereCPP\\V48IN.TXT");
    ofstream fout("d:\\FisiereCPP\\V48OUT.TXT");
     unsigned int n , x , i , j;
    fin >> n;
   while(fin >> x)
        frecventa[x]++;
    fin.close();    
    for(i = 1 ; i <= 9999 ; i++)
    {
        if(frecventa[i] == 1)
            cout<<i<<" ";        
    }
    return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;
int frecventa[9999];
int main()
{
    ifstream fin("d:\\FisiereCPP\\V48IN.TXT");
    ofstream fout("d:\\FisiereCPP\\V48OUT.TXT");
     unsigned int n , x ;
    fin >> n;

    while(fin >> x)
        frecventa[x]++;

    fin.close();
    for(i = 1 ; i <= 9999 ; i++)
    {
        if(frecventa[i] == 1)
             {
                 cout<<i<<" ";
             }
    }
    return 0;
}
*/