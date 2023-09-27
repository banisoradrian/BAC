#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[101] , sirRezerva[101];
    cin.get(sir , 101);
    char *cuvant = strtok(sir , " ");
    while(cuvant)
    {
        if(cuvant[0] != '-')
        {
            strcat(sirRezerva , cuvant);
            strcat(sirRezerva , " ");
        }
        cuvant = strtok(NULL , " ");
    }

    strcpy(sir , sirRezerva);
    cout << sir;
    return 0;
}
