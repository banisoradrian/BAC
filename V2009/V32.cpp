#include <iostream>
#include <cstring>
#include <fstream>
using  namespace std;

int main()
{
    /*
    char s[251] , c1 , c2;
    cin.get(s , 251);
    cout<<"Citeste c1 si c2: ";
    cin >> c1 >> c2;
    cout<<s<<endl;
    for(int i = 1 ; i <= strlen(s) ; i++)
        if(s[i] == c1) s[i] = c2;
        else if(s[i] == c2) s[i] = c1;
        cout<<s<<endl;
        */
       ifstream f("d:\\FisiereCPP\\Ciorna.txt");
   int a , min1 = 100 , min2 = 100;

   while(f >> a)
   {
		if ( (a >= 10 && a <= 99) ||  (a <= -10 && a >= -99) ) 
       {
           if(a < min2) 
           {
               min1 = min2;
               min2 = a;
           }
           else if(a < min1)
                min1 = a;
       }
   }
   if(min2 == -100) cout<<0;
   else cout <<min2<<" "<<min1;
    return 0;
}