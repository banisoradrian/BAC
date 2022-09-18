#include <iostream>

using namespace std;
int nr_niv,nr;
struct nod
{
    int info;
    nod  *st,*dr;
}* rad,*p;

void creare(nod *&p,int val)
{                                                                                                 
    if(p==0)
    {
        p=new nod;
        p->info=val;
        p->st=p->dr=0;
    }
    else
        if(val<=p->info)
            creare(p->st,val);
        else
            creare(p->dr,val);
}

void SRD(nod *p)
{
    if(p)
    {
         nr++;
         if(nr>nr_niv)
            nr_niv=nr;


        SRD(p->st);
        cout<<p->info<<"   ";
        SRD(p->dr);

        if(nr>nr_niv)
            nr_niv=nr;

        nr--;
    }
}

int main()
{
    int val;
    for(int i=1;i<=5;i++)
    {
        cout<<"Valoare:"<<i<<endl;
        cin>>val;
        creare(rad,val);
    }
    cout<<endl;


    SRD(rad);

    cout<<endl<<"Nr niveluri:"<<nr_niv<<endl;
    return 0;
}
