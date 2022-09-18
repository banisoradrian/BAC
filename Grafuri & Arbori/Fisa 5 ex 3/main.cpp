#include<iostream>  //Fisa 5 ex 3
using namespace std;
int n,max=0, r, T[100], a[100][100], p[100];

void citire()
{ int i,x,y;
  cin>>n;
  for(i=1;i<=n-1;i++)
    { cin>>x>>y;
      a[x][y]=a[y][x]=1;;
    }
  cin>>r;
}

void DF(int r, int niv)
{  p[r]=1;
   if(niv>max) max=niv;
   for(int i=1;i<=n;i++)
      if(a[r][i] &&!p[i])
          DF(i,niv+1);
}

int main()
{ int i;
  citire();
  DF(r,1);
  cout<<max;
  return 0;
}
