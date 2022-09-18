#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;
unsigned int transformareBaza10(unsigned int b , long int n)
{
    unsigned int c , k = 0 , suma = 0;
    while(n)
    {
        c = n % 10;
        suma = suma + c * pow(b , k); 
         k++;
        n = n / 10;
    }
    return suma;
}
int main()
{
    unsigned int x , y , suma = 0 , sumaMax = 0;
    ifstream f("d:\\FisiereCPP\\TA2020T20.txt");
    f >> x;
    suma = x;
    while(f >> y)
    {
        if(x % 2 == y % 2)
            suma = suma + y;
        else if(suma > sumaMax)
        {
            sumaMax = suma;
            suma = y;
        }
        else 
            suma = y;
        x = y;
    }
    f.close();
    cout<<sumaMax;
    return 0;
}
/*
    char s[101];
    cin.get(s , 101);
    int i = 0 , j;
    while(i < strlen(s))
    {
        if(s[i] == ',')
        {
            j = i + 1;
            while(s[j] != ' ' && j < strlen(s))
            j++;
            strcpy(s + i , s + j);
        }
        i++;
    }
    cout<<s;
*/