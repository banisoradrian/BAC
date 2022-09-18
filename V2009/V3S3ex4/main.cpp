#include <iostream>
using namespace std;

int main()
{
    int a = 125854 , b = 0;
    while(a % 10 != 0)
    {
      while(a % 10 == b)
      b++;
    }
    cout<<"gg"<<endl;
    cout<<b;

    return 0;
}
