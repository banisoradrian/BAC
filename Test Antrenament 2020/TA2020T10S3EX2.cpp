#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char text[250];
   cout<<"Dati textul:"<<endl;
   cin.get(text,251);
   cin.get();

   char t1[250]="",t2[250]="",tf[250]="",*p,sep[]=" ",a1,a2;
   cout<<endl;
   p=strtok(text,sep);

   strcpy(t1,p);
   a1=t1[strlen(t1)-1];
   strcat(tf,t1);
   while(p)
   {
       ///strcpy(tx,p);
       ///cout<<tx<<endl;
       p=strtok(NULL,sep);
       strcpy(t2,p);
       a2=t2[strlen(t2)-1];
       if(a1==a2)
       {

           strcat(tf," succes ");
           strcat(tf,t2);
       }
       else
          {
            strcat(tf," ");
            strcat(tf,t2);
          }
        strcpy(t1,t2);
        a1=a2;
        cout<<tf<<endl;
        cin.get();
    }

    return 0;
}
