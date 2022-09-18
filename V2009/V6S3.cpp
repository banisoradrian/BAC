#include <iostream>
#include <fstream>

using namespace std;
int main()
{

ifstream f("d:\\FisiereCPP\\V6S3.txt");
unsigned int u , c , n = 1;
f >> u;
while(f >> c)
  if(u != c)
    {
      cout<<u<<" "<<n<<" ";
      u = c;
      n = 1;
    }
  else
      n++;
  cout<<u<<" "<<n<<" ";
  return 0;
}
