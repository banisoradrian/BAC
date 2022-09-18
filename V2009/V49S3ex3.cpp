#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Citeste n: ";
        cin>>n;
    }
    while(!( (n >= 1) && (n <= 50) ));
    int sir[n+1] , aux;
    for(int i = 1 ; i <= n ; i++)
        do
            {
                cout<<"sir["<<i<<"] = ";
                cin >> sir[i];
            }
        while(!( (sir[i] >= 0) && (sir[i] <= 9999)));
/// ordonare crescatoare
    for(int i = 1;i <= n-1 ; i++)
        for(int j= i + 1 ; j <= n ; j++)
            if(sir[i] > sir[j])
                {
                    aux = sir[i];
                    sir[i] = sir[j];        //swap(sir[i] , sir[j]);
                    sir[j] = aux;
                }

    for(int i = 1 ; i <= n ; i++)
        cout<<sir[i]<<"  ";
    cout<<endl;
    aux=1;
    for(int i = 2 ; i <= n ; i++)
        if(sir[i] - sir[i-1] != i-1)
          {
              aux = 0;
              cout<<"Nu";
              break;
          }
    if(aux)
        cout<<"DA";
    
    return 0;
}