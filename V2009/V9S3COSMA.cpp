#include <iostream>
#include <fstream>
using namespace std;
int v[1000001];
int main()
{
ifstream f("d:\\FisiereCPP\\V9S3.txt");
int c , aux = 0 , m1 = 0 , m2 = 0;
while(f >> c)
      v[c] = '1';
  for(int i  = 999 ; i >=100 ; i--)
        {
          if(v[i] != '1')
           {
              if(aux == 0)
                m1 = i;
              else
                m2 = i;
             aux++;
           }
           if(aux == 2)
           break;
        }
        f.close();
        if(m1 == 0 || m2 == 0)
          cout<<0;
        else
          cout<<m1<<" "<<m2;
  return 0;
}
