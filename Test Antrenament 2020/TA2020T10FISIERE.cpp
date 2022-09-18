#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("d:\\FisiereCPP\\TAT102020.TXT");
    int a1,a2,v,r,nr,vm,rm,nrm;
    f>>a1>>a2;
    v=a1;r=a2-a1;nr=2;
    vm=v;rm=r;

    a1=a2;

    while(f>>a2)
    {

        if(a2-a1==r)
           {
               nr++;
               if(nr>nrm)
                  {
                      nrm=nr;
                      vm=v;
                      rm=r;
                  }
           }
        else
        {
            r=a2-a1;
            v=a1;
            nr=2;
        }
        a1=a2;
    }
    f.close();
    cout<<nrm<<" "<<vm<<"  "<<rm<<endl;
    cin.get();
    do
    {
        cout<<" "<<vm;
        vm+=rm;
        nrm--;
    }
    while(!(nrm==0));
    cout<<endl;
    return 0;
}