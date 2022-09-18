#include <iostream>
using namespace std;

int main()
{
  /*
char Cuvinte[5][10];
for(int i = 0 ; i < 5 ; i++)
cin>>Cuvinte[i];

for(int i = 0 ; i < 5 ; i++)
cout<<"Cuvantul de pe pozitia " << i << " este:" <<Cuvinte[i] <<"\n";
*/


Sortarea crescatoare / descrescatoare a numerelor unui vector

int c[10]={1 , 66 , 22 , 4};

for(int i = 0 ; i < 4 ; i++)
    {
      for(int j = i + 1 ; j < 4 ; j++)
      {
        if(c[i] > c[j])  //c[i]<c[j] pt var descrescatoare
        swap(c[i] , c[j]);
      }
    }
    for(int i = 0 ; i < 4 ; i++)
    cout<<c[i]<<" ";




  return 0;
}
