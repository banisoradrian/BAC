#include <iostream>
#include <fstream>
using namespace std;

int tablou(int i, int v[])
{
 if(i==0) return 0;
 if(v[i]!=v[i-1]) return tablou(i-1,v);
 return 1;
}

int main()
{

cout<<tablou(0,v)+tablou(3,v);
//681012108
cout<<endl;
cout<<83 / 3 <<" "<<14 % 12;
cout<<endl;


return 0;
}
