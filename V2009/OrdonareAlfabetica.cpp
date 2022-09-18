#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int total = 0;
    char vectorCuv[5][11];
    char text[255];
    cout<<"Citeste textul: ";
    cin.getline(text, 255);
    char *cuv = strtok(text, " ");
    while(cuv != NULL)
    {
     strcpy(vectorCuv[total], cuv);
      total++;
     cuv = strtok(NULL, " ");
    }
    for(int i = 0; i < total; i++)
    {
     for(int j = i + 1; j < total; j++)
        {
            if(strcmp(vectorCuv[i], vectorCuv[j]) > 0)
          
             swap(vectorCuv[i] , vectorCuv[j]);
          /*
          char aux[11];
            strcpy(aux, vectorCuv[i]);
            strcpy(vectorCuv[i], vectorCuv[j]);
            strcpy(vectorCuv[j], aux);
          */
        }
    }
    
    for(int i = 0; i < total; i++)
     cout << vectorCuv[i] << "\n";
    return 0;
}