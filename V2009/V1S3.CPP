#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int n , c , aux = 0 , nr ;
  ifstream f("d:\\FisiereCPP\\V1S3.txt");
  do
  {
    cout<<"Citeste n: "; cin >>n;
  }
  while(!(n > 0 && n <= 999));

  while(f >> c)

    if(c % n == 0)
    {
      aux = 1;
      cout<<c<<" ";
    }


    if(aux == 0)
    cout<<"nu exista";

  f.close();
  return 0;
}
