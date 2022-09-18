#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream g("d:\\FisiereCPP\\V7S3.txt");
int n,i,nr_secund;
do
{
cout << "Citeste n <= 100 ";
cin >> n;
}
while(!(n > 0 && n <= 100));

cout << "introdu " << 3*n << " numere naturale de cel mult 4 cifre: " << endl;
int v[3*n];
for(i=0;i<3*n;i++)
cin>>v[i];


if(n > 1)
{
    if(n % 2 == 0)

    nr_secund = 3*n-2;

  else

    nr_secund = 3*n-1;

 swap(v[1] , v[nr_secund]);
}
for(i = 0;i < 3*n ; i++)
  g << v[i] <<" ";

return 0;
}
