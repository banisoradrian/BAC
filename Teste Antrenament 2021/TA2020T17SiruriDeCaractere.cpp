#include <iostream>
#include <string.h>
using namespace std;

char text[256],*p,sep[]=" ",cuv[256]="",tx[]="";
int aux;
int main()
{
    cout<<"Dati text:"<<endl;
    cin.get(text,256);

    p=strtok(text,sep);
    aux=1;
    strcpy(cuv,p);
    for(int i=0;i<strlen(cuv);i++)
       if(!strchr("aeiou",cuv[i]))
       {
           aux=0;
           break;
       }
    if(aux)
    {
        strcat(tx,cuv);
        strcat(tx," ");
        strcat(tx,cuv);
    }
    else
        strcat(tx,cuv);

   cout<<tx<<endl;
   cout<<"//////=====/////"<<endl;

   while(p)
   {
      p=strtok(NULL,sep);
      strcpy(cuv,p);

      ///===========
      aux=1;
      for(int i=0;i<strlen(cuv);i++)
         if(!strchr("aeiou",cuv[i]))
           {
              aux=0;
              break;
           }
      if(aux)
         {
            strcat(tx," ");
            strcat(tx,cuv);
            strcat(tx," ");
            strcat(tx,cuv);
         }
      else
         {
            strcat(tx," ");
            strcat(tx,cuv);
         }

      cout<<tx<<endl;
      cout<<"//////=====/////"<<endl;
      cin.get();

    }


    return 0;
}