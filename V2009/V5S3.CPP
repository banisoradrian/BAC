#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int c ;
  ofstream g("d:\\FisiereCPP\\V5S3.TXT");
  ifstream f("d:\\FisiereCPP\\V5S3.TXT");
  do
  {
    cout<<"Citeste c:"; cin >> c;
  }
  while(!(c >= 10 && c <= 99999999));
  while(c != 0)
  {
    g <<c<<" ";
    c = c / 10;
  }
  g.close();
  while ( f >> c)
  cout<< c <<" ";
  f.close();

  return 0;
}
