#include <iostream>
using namespace std;
int main()
{
    int n = 10780;
    int divizor = 2 , putere = 0;
    cout<<"Raspuns: "<<endl;
    while(n != 1)
    {
        while(n % divizor == 0)
        {
            putere++;
            n = n / divizor;
        }
        if(putere != 0)
            cout<<divizor<<" ^ "<<putere<<endl;
        divizor++;
        putere = 0;
    }
    return 0;
}