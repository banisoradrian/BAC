#include <iostream>
#include <cstring>
using namespace std;
int cf[10];
int main()
{
    /* 
    //  PROBLEMA SIR DE CARACTERE
  char s[41] = "abbc", aux[41];

  //cin.getline(s, 41);

    for(int i = 0; i < strlen(s) ; i++)
    {
        strcpy(aux, s);
        strcpy(aux+i, aux+i+1);
        cout<<aux<<"\n";
    }
    */
   unsigned int n , aux = 1;
   float v[101];
   cin >> n;
   for(int i = 1 ; i <= n ; i++)
         cin >> v[i];

    for(int i = 1 ; i <= n ; i++)
   {
      for(int j = 1 ; j <= n ; j++)
      {
         if(v[i] == v[j])
            {
                aux = 0;
                break;
            }
            else 
      }
         


   }
    return 0;
}