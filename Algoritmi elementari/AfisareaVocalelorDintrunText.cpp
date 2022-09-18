#include <iostream>
#include <string.h>
using namespace std;

bool CautareVocale(char c)
{
  if( c =='a' || c =='e' || c =='i' || c =='o' || c == 'u' || c =='A' || c =='E' || c =='I' || c =='O' || c == 'U')
  return true;
  else return false;
}
int main()
{
  char cuvant[100];
  cout<<"Citeste textul:";cin.get(cuvant ,200);
  for(int i = 0 ; cuvant[i] !='\0' ; i++)
  {
  if(CautareVocale(cuvant[i]))
      cout<<cuvant[i]<<" ";
    }
    return 0;
}
