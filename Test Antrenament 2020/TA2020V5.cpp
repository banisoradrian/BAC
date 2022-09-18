#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
unsigned int baza(long int n)
{
    /// CEA MAI MICA BAZA  A UNUI NUMAR -> CEA MAI MARE CIFRA A NUMARULUI+1
    unsigned int cifMax = 0;
     cifMax = n % 10;
    while(n)
    {
        if(n % 10 > cifMax)
            cifMax = n % 10;
        n = n / 10;
    }
    cifMax++;
    return cifMax;
}
int main()
{   
    ///cout<<baza(50731);
    int x , suma = 0 , sumaMax = 0 , elementePoz = 0 , negativMaxim = -1000;
    ifstream f("d:\\FisiereCPP\\TAT52020.txt");
    while(f >> x)
    {
        suma = suma + x;
        if(suma < 0)
           suma = 0;
        if(suma > sumaMax)
            sumaMax = suma;
        if(x > 0)
            elementePoz ++;
        if(x > negativMaxim)
            negativMaxim = x;
    }
    f.close();
    if(elementePoz)
        cout << sumaMax;
    else 
        cout<<negativMaxim;
    return 0;
}

/*
char sir[101] ;
    int contor = 0;
    cout<<"Citeste sirul :";
    cin.get(sir , 101);
    char *cuvant = strtok(sir , " ");
    while(cuvant)
    {
        if(strchr("123456789" , cuvant[0]) != NULL)
            if(strchr(cuvant , ',') == NULL) 
                contor++;
        cout<<cuvant<<endl;
        cuvant = strtok(NULL , " ");
    }
    cout<<contor;
*/