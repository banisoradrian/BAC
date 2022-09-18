#include <iostream>
#include <iomanip>
using namespace std;
const int n=5;
int mat[n+1][n+1],coada[n+1],t[n+1],a[n+1],k,p,conex;
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

 void parc_lat(int nod)
 {
       for(int j=1;j<=n;j++)
       {
           coada[j]=t[j]=0;
       }
       t[nod]=1;
       k=1;p=1;
       coada[k]=nod;
       while(p<=k)
       {
           for(int j=1;j<=n;j++)
              if((j!=nod) && (mat[coada[p]][j]==1) && (t[j]==0))
                   {
                        k++;
                        t[j]=1;
                        coada[k]=j;
                   }
            p++;
       }
 }
int main()
{
    citire2();
    afis();
    cout<<"========"<<endl;
    //conex=1;
    int q=1;
    while(q<=n)
    {
        if(!a[q])
        {
            parc_lat(q);
            //cout<<"Conex:"<<conex<<endl;
            for(int i=1;i<=n;i++)
                if(coada[i])
                      {
                          cout<<setw(6)<<coada[i];
                          a[coada[i]]=1;
                      }
            cout<<endl;
            //conex++;
        }
        q++;
    }
    return 0;
}

