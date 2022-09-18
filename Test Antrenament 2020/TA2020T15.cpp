#include <iostream>
#include <cstring>
using namespace std;
void divPrimMax(long int n , unsigned int &p)
{
    p = 0;
    int div = 2 , putere = 0;
    while(n != 1)
    {
        while(n % div == 0)
        {
            putere++;
            n = n / div;
        }
        if(putere)
            if(p < div)
                p = div;
        div++;
        putere = 0;
    }
}
int main()
{       
    int a[4][5];
 
	int i,j;
	for(i=1;i<4;i++)
    {
		for(j=1;j<6;j++)
        {
			if(i == 1 || i == 2 )
                a[i][j] = j;
            else
                a[i][j] = a[i][j] + 2 * j;
		}
			
	}
	
 
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
    char s[101] , vocale[]="aeiou";
    unsigned int contorV = 0 , contorC = 0 , contor = 0;
    cin.get(s , 101);
    char *cuvant = strtok(s , " ");
    while(cuvant)
    {
        for(int i = 0 ; i < strlen(cuvant) ; i++)
            if(strchr(vocale , cuvant[i]))
                contorV++;
            else
                contorC++;
            if(contorV == contorC)
                contor++;
            cuvant = strtok(NULL , " ");
            contorV = 0 , contorC = 0;
    }
    cout<<contor;

    return 0;
}
/*
 1  1  2  3  5
 2  2  4  6  10
 3  3  6  9  15
*/