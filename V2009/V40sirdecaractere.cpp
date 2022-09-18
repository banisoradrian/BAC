#include <iostream>
#include <cstring>
using namespace std;

int  main()
{
    /*
   char sir[250] = "bine*albine*foarte*bine*";
  // cin.get(text , 256);
   char si[250] , tx[250] , *cuvant  , sep[] = "*"; //sir initial
   cout<<sir<<endl;

   cuvant = strtok(sir , sep);
   cout<<"==Urmeaza textul spart in cuvinte=="<<endl;
   cout<<"==========="<<endl;
   strcpy(si , cuvant);
   cout<<"Primul cuvant:"<<si<<endl;
   cout<<"==*********========"<<endl;
   while(cuvant)
   {
       strcpy(tx , cuvant);
       if(strcmp(si , tx) != 0)
          cout<< tx << sep;
       else
          cout <<sep;
       cuvant = strtok(NULL , sep);
   }
   */
  int v[100] ,aux , aux1 = 0 , n;
  cin >> n;
  for(int i = 1 ; i <= n ; i++)
        cin>>v[i];
 for(int i=1;i<5;i++) 
 for(int j=i;j>i;j--) 
    if(v[i]<v[j]) 
    { 
    aux=v[i]; 
    v[i]=v[j]; 
    v[j]=aux; 
    aux1++;
    }
 cout<<aux1<<endl;
 for(int i = 1 ; i <= 5 ;i++)
    cout<<v[i]<<" ";
   return 0;
}