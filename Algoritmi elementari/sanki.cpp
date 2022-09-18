#include <bits/stdc++.h>
using namespace std;
int a[5]={0 , 12 , 35 , 2 , 8};

void  beta(int n)
{if (n!=1)
 { cout<<n<<" ";
 if (n%3==0) beta(n/3);
 else beta(2*n-1);}
 else  cout<<1;
}
int main()
{

beta(15);
//1 2 3 4 5 3 2 2 1 1 0
cout<<endl;
cout<<endl;
cout<<1 / 3 <<" "<<5 % 10;
cout<<endl;


return 0;
}
