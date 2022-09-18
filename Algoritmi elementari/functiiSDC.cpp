#include <iostream>
#include <cstring>
using namespace std;

int main()
{
 cout<<"strlen"<<endl;//strlen
 char l[10]="mouse";
 cout<<strlen("mouse");
 cout<<endl;


 cout<<"strcat"<<endl;//strcat

char s1[128] = "merele sunt ";
char s2[128] = "sanatoase";
strcat(s1, s2);
cout << "strcat(s1, s2) = " << s1 ; // merele sunt sanatoase
cout<<endl;


cout<<"strncat"<<endl;//strncat
char a1[128] = "merele sunt ";
char a2[128] = "sanatoase";
strncat(s1, s2 , 3);
cout << "strncat(s1, s2) = " << s1 ; // merele sunt sanatoase
cout<<endl;

cout<<"strcpy"<<endl;//strcpy
char b1[100]="caine";
char b2[100]="pisica";
strcpy(b1 , b2);
cout<<b1;
cout<<endl;

cout<<"strncpy"<<endl;//strcpy
char c1[100]="abc";
char c2[100]="defgh";
strncpy(c1 , c2 , 4);
cout<<c1;
cout<<endl;

cout<<"strcmp"<<endl;//strcmp
char d1[128]="mera";
char d2[128]="mere";
cout<< strcmp(d1 , d2);  // la asta nu compileaza calumea ar trb sa fie -4
cout<<endl;

cout<<"strchr"<<endl; //strchr
char f[128]="Calul sare azi";
char *p=strchr(f   , 'a');
while(p !=NULL)
{
  cout << p << "\n";
  p=strchr(p + 1 , 'a');
}
cout<<endl;

cout<<"strstr"<<endl; //strstr
char t[128]="masina mea o sa ramana masina mea";
char *x = strstr(t , "masina");
while(x != 0)
{
  cout << x <<"\n";
  x = strstr(x+1 , "masina");
}

cout<<strtok<<endl;//strtok
char g[100]="Ma duc acasa ..... sa ?! ma! joc!   LOL !";
char *cuvant = strtok(g , " .?!");
while(cuvant != NULL)
{
  cout<<cuvant<<"\n";
  cuvant=strtok(NULL , " .?!");
}
return 0;
}
