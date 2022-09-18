#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("d:\\FisiereCPP\\V39.txt");
     unsigned int n , c , aux = 0;
   fin >> c;
   int v[c];
   while(fin >> c)
   {    
       if(c % 2 == 0)
       {
             n++; // contor
             v[n] = c;
       }
   }
   for(int i = 1 ; i <= n ; i++)
        if(v[i] < v[i + 1])
                aux = 1;
        else 
            {
                aux = 0;
                break;
            }

    if(aux) cout<<"DA";
    else cout<<"NU";
 cout<<endl;
 for(int i = 1 ; i <= n ; i++)
    cout<<v[i]<<" ";
    /*
  char s[256] , vocale[] = "aeiou" , *cuvant;
  cin.get(s , 256);
  cuvant = strtok(s , " ");
  while(cuvant)
  {
      if(strchr(vocale , *cuvant))
        strrev(cuvant);
        cout<< cuvant << " ";
        cuvant = strtok(NULL , " ");
  }
  */
  return 0;
}