#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    char sir[250], x[25], *p; int k = 1, variabila = 0, OK = 0;

    cin.get(sir, 250); cin.get();
    cin >> x;

    p = strtok(sir, " ;");

    while(p){
        if(variabila == 1 && k == 2){
            cout << p << " "; k = 1; variabila = 0; OK = 1;
        }
        if(k == 1 && strcmp(p, x) == 0)
            variabila = 1;
        k++;
        if(k == 3){
            k = 1; variabila = 0;
        }
        p = strtok(NULL, " ;");
    }

    if(OK == 0)
        cout << "NU";
        
    

    return 0;
}