#include <iostream>
#include <cstring>
using namespace std;
int maxim(long int n)
{
    int cif = -1;
    while(n)
    {
        int c = n % 10;
        if(c % 2 == 1 && c > cif)
            cif = c;
        n = n / 10;
    }
    return cif;
}
int main()
{
  cout<<"START"<<endl;
    char s[101] , s2[101] = " " , vocale[]="aeiou";
    unsigned int nr = 0 , cnt = 0;
    bool aux = 0;
    cin.get(s , 101);
    char *cuvant = strtok(s , " ");
    while(cuvant)
    {
        for(int i = 0 ; i < strlen(cuvant) ; i++)
            if(strchr(vocale , cuvant[i]) != NULL)
               nr++;
            if((strlen(cuvant) -1 == nr))
                  cnt++;
        cuvant = strtok(NULL , " ");
    }
    strcpy(s , s2);
    cout<<cnt;
    return 0;
}
/*
S2 EX 3
  int i , j , a[100][100];
    for(i = 0 ; i < 4 ; i++)
        for(j = 0 ; j < 5 ; j++)
            a[i][j] = 20 - i - 4*j;
    for(i = 0 ; i < 4 ; i++)
        {
            for(j = 0 ; j < 5; j++)
                cout<<a[i][j]<<" ";
                cout<<endl;
        }
     
*/