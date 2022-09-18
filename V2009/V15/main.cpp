#include <iostream>
using namespace std;
int A[6][6];
int main()
{
    int n , i , j;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 10000 && n <=  99999));
    for(i = 1 ; i <= 6 ; i++)
    {
        for(j = 1 ; j <= 6 ; j++)
        {
            if(i >= j) A[i][j] == 0;
                else
            {
                A[j][i] = n % 10;
                A[i][j] = n % 10;
            }
        }
            n = n / 10;
    }
   for(i = 1 ; i <= 6 ; i++)
   {
       for(j = 1 ; j <= 6 ; j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
   }
  return 0;
}
