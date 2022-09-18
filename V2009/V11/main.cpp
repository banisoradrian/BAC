#include <iostream>
#include <string.h>
using namespace std;

int sum(int x){

	int sum = 1;
	for (int i = 2; i <= x/2 ; i++)
		if (x % i == 0)
			sum = sum + i;
	return sum + x;

}

/*
int n;
float s = 0;
struct elem
{
    int nr;
    elem *urm;
}*p ,*prim , *ultim;
void creare(int n)
{
    if(prim == NULL)
    {
        prim = new elem;
        prim -> nr = n;
        prim -> urm = NULL; // Nu avem nimic in dreapta de aia e null
        ultim = prim;
    }
    else
    {
        p = new elem;
        p -> nr = n;
        p -> urm = NULL;
        ultim -> urm = p;
        ultim = p;
    }
}

void parcurgere()
{
    if(prim == NULL) cout << "lista vida";
    else
    {
        p = prim;
        while(p)
        {
            cout<<p -> nr <<" ";
            s = s + p -> nr;
            p = p -> urm;
        }
    }
}
*/

int main()
{
    /*
    int n , p , i , j;
    do
    {
        cout<<"Citeste n: ";
        cin >> n;
    }
    while(!(n >= 2 && n <= 23));
    int a[n+1][n+1];
    for (i = 1 ; i <= n;i++)
         for (j = 1 ; j <= n ; j++)
            {
                cout<<"a["<<i<<"]["<<j<<"]=";
                cin>>a[i][j];
            }
   for (j = 1;j < n;j++)
    cout<<a[1][j]<<" ";
   for (i = 1;i < n;i++)
    cout<<a[i][n]<<" ";
   for (j = n ; j > 1 ; j--)
    cout<<a[n][j]<<" ";
   for (i=n ; i>1 ; i--)
    cout<<a[i][1]<<" ";

    */

    /*
    unsigned int n , k;
    int p = 1 , c;
    cin >> n >> k;
    while(n > 0 && k > 0)
    {
        c = n % 10;
        if(c % 2 == 1) p = p * c;
        n = n / 10;
        k = k - 1;
    }
    cout << p;


   char s[12];
   strcpy(s,"abracadabra");
int i=0;
cout<<strlen(s);
while (i<strlen(s))
 if (s[i]=='a')
 strcpy(s+i,s+i+1);
 else
 i=i+1;
cout<<" "<<s;
*/


/*
for(int i = 1 ; i <= 5 ; i++)
{
    cout<<i<<endl;
    cin>> n;
    creare(n);
}
cout<<endl;

parcurgere();

p = prim;
s = p -> nr + p ->urm -> nr + p -> urm -> urm -> nr;
cout<<endl<<s<<endl;
*/




 int  n, m, max , min = 0, i , j;
  do
    {
        cout<<"Citeste m: " ;
        cin >> m;
    }
    while(!(m >= 1 && m <= 10));
      do
    {
        cout<<"Citeste n: " ;
        cin >> n;
    }
    while(!(n >= 1 && m <= 10));

    int a[m+1][n+1];
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++)
    do{
            cout<<"a["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];
    }
      while(!(a[i][j]) >= 1 && (a[i][j] <= 9999));
  for (i = 1; i <= m; i++) {
    max = a[i][1];
    for (j = 1; j <= n; j++)
      if (a[i][j] < max)
        max = a[i][j];
    if (max > min)
      min = max;
  }
  cout << min;


  return 0;
}
