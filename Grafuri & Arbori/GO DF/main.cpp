#include <iostream>
#include <iomanip>


using namespace std;
const int n=7;

int mat[n+1][n+1],t[n+1];
void citire()
 {
 	int i,j;
    for(i=1;i<=n-1;i++)
   	    for(j=i+1;j<=n;j++)
      	    {
         	     cout<<"mat["<<i<<"]["<<j<<"]="<<endl;
                 cin>>mat[i][j];
                 mat[j][i]=mat[i][j];
            }
 }
void citire2()
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
                 cout<<"mat["<<i<<"]["<<j<<"]="<<endl;
                 cin>>mat[i][j];
    }
}
 void afis()
 {
 	int i,j;
          for(i=1;i<=n;i++)
              {
   		for(j=1;j<=n;j++)
      		     cout<<setw(6)<<mat[i][j];
      	           cout<<endl;
             }
 }

 void parc_ad(int nod)
 {
     cout<<nod<<"  ";
     for(int i=1;i<=n;i++)
        if(t[i]==0 && mat[nod][i]==1)
          {
             t[i]=1;
             parc_ad(i);
          }
 }

int main()
{
    //citire();
    citire2();
    afis();
    for(int i=1;i<=n;i++)
        t[i]=0;
    /////////////////
    for(int i=1;i<=n;i++)
        if(t[i]==0)

          {  t[i]=1;
             parc_ad(i);
             cout<<endl;
          }

    return 0;
}
