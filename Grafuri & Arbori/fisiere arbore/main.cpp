#include<iostream>
int n, T[100], a[100][100];

void afis()
{
  for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
          cout<<a[i][j]<<" ";
          cout<<endl;
    }
}

int main()
{ int i;
  cin>>n;
  for(i=1;i<=n;i++) cin>>T[i];
  for(i=1;i<=n;i++)
    if(T[i]!=0)
      { cout<<"["<<T[i]<<","<<i<<"] ";
         a[i][T[i]]=a[T[i]][i]=1;
      }
  cout<<endl;
  afis();

  return 0;
}
