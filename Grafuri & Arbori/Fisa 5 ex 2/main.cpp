#include<iostream> //Fisa 5 ex 2
using namespace std;
int n, r, T[100], a[100][100], p[100];

void citire()
{ int i,x,y;
  cin>>n;
  for(i=1;i<=n-1;i++)
    { cin>>x>>y;
      a[x][y]=a[y][x]=1;;
    }
  cin>>r;
}

void BF(int r)
{  int s,d,i,x[100];
   d=s=1;
   x[1]=r; p[r]=1;
   while (s<=d)
   { for(i=1;i<=n;i++)
      if(a[x[s]][i] &&!p[i])
         { d++; x[d]=i;
           p[i]=1; T[i]=x[s];
         }
     s++;
   }
}

int  main()
{ int i;
  citire();
  BF(r);
  for(i=1;i<=n;i++) cout<<T[i]<<" ";
  return 0 ;
}
