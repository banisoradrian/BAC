#include <iostream>
#include <iomanip>

using namespace std;
const int n=6;
int a=100;
int suma(int a,int b)
{
    
    return a+b;
}


void its1(int &a,int &b)
 {
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"Afisare din subrutina:"<<endl;
     cout<<"a="<<a<<"  b="<<b<<endl;
 }

void its2(int a,int b);

void citire(int sir[n])
{
    for(int i=1;i<n;i++)
    {
        cout<<"Valoare :"<<i<<endl;
        cin>>sir[i];
    }
}

void afisare(int sir[n])
{
   
    for(int i=1 ; i<n ; i++)
        cout<<setw(4)<<sir[i];
    cout<<endl;
}
int main()
{
    int x=3,y=4;
    cout<<"Subprogram suma"<<suma(x,y)<<endl;
    its2(x,y);
    cout<<"Afisare din main dupa its2:"<<endl;
    cout<<"x="<<x<<"  y="<<y<<endl;
    cout<<"==================="<<endl;
    its1(x,y);
    cout<<"Afisare din main dupa its1:"<<endl;
    cout<<"x="<<x<<"  y="<<y<<endl;
    int r[n];
    citire(r);
    afisare(r);
    cout<<a<<endl;
    return 0;
}

void its2(int a,int b)
 {

     a=a+b;
     b=a-b;
     a=a-b;
     //swap(a , b);
     cout<<"Afisare din subrutina:"<<endl;
     cout<<"a="<<a<<"  b="<<b<<endl;
 }