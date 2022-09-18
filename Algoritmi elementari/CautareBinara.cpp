#include <iostream>

using namespace std;

const int N = 10;
int V[N]={16 , 27 , 43 , 45 , 49 , 60 , 68 , 81 , 92 , 96};

int CautareBinara(int x)
{
  int Sol = -1 ,Left = 0 , Right = N-1 ;
  while(Left <= Right)
  {
    int MID =(Right+Left)/2;
    if(V[MID] == x)
    {
      Sol = MID;
      break;
    }
    if(V[MID] > x)
      Right = MID - 1;
    if(V[MID] < x)
      Left = MID + 1;
  }
  return Sol;
}
int main()
{
  cout<<CautareBinara(43); //2
  return 0 ;
}
