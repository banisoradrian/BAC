#include <iostream>
#include<string.h>
//maximul dintre 2 / 4 nr;
using namespace std;

int main()
{
 int a , b , c , d , max;

 cout<<"Da-ti valori lui a , b si c"<<endl;
 cout<<"Valoarea lui a:"; cin>>a;
 cout<<"Valoarea lui b:"; cin>>b;
 cout<<"Valoarea lui c:"; cin>>c;
 cout<<"Valoarea lui d:"; cin>>d;
 max=a;
 if(b>max) max=b;
 if(c>max) max=c;
 if(d>max) max=d;
     cout<<"Maximul este:"<<max;
    return 0;
}
