#include<string.h>
#include<iostream>

using namespace std;
int main ()
{
    /*1c.
    unsigned int n;
    int nr = 0 , a , m;
    cin >> n;
 a  = 9;
   do
      {
        m= n;
        while(m != 0 && m % 10 != a)
            m = m / 10;
        if(m != 0)
            nr = nr * 10 + m % 10;
            a--;
    }
    while(!(a <= 0));

    cout<<nr;
    */

    char s[255];
  cin.get(s, 255);
  char v[] = " aeiou";
  int gata = 0, i;
  i = strlen(s) - 1;
  while (!gata) // ca sa stearga o singura data
  {
    if (strchr(v, s[i]) == 0)
    {
      strcpy(s + i, s + i + 1);
      gata = 1;
    }
    i--;
  }
  cout << s;

 return 0;
}
