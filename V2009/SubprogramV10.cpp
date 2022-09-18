#include <iostream>
using namespace std;
void sub(int n , int &a , int &b)
{
    int aux = 0 , c;
    while(n > 5 && aux < 2)
     {
         c = 1;
         for(int i = 5 ; i <= n / 2 ; i++)
            if(n % i == 0)
            {
                c = 0;
                break;
            }
            if(c != 0)
            {
                if(a == 1)
                    {
                        a = n;
                        aux++;
                    }
               else if(b == 1)
                    {
                        b = n;
                        aux++;
                    }
                   
            }
      n--;
     }

}
int main()
{
    int n = 49 , a = 1 , b = 1;
    sub(n , a , b);
    cout<<a<<" "<<b;

    return 0;
}