#include <iostream>
using namespace std;
void inv(int a , int &b)
{
    b = 0;
    while(a)
    {
       b = b * 10 + a % 10;
		a = a / 10; 
    }
}
int main()
{
    int n;
    do
    {
        cout << "Citeste n: ";
        cin >> n;
    }
    while(!(n >= 10 && n <= 99999999));
   int st = n , dr = n;

	while (true) 
    {
		int invSt , invDr;
		inv(st,invSt);
		inv(dr,invDr);

		if (st == invSt) 
        {
			cout<<st;
			break;
		}
		if (dr == invDr)
        {
			cout<<dr;
			break;
        }
		st--;
		dr++;
	}

    return 0;
}