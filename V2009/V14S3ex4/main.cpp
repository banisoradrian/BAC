#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n, contor = 0, suma , sumpar = 0;
    ifstream f("d:\\FisiereCPP\\V14S3.txt");
	while (f >> n)  //citirea numerelor din fisier
	{
		suma = 0; //resetarea sumei dupa fiecare spargere a numarului in cifre
		cout << n << " ";
		while (n != 0) //spargerea numarului in cifre
		{
			suma += n % 10;
			n = n / 10;
		}
		if (suma % 2 == 0) //verificare daca suma cifrelor este para
			sumpar++;
		contor++; //incrementarea contorului de iteratii pentru a afisa cate 5 elemente pe o linie
		if (contor % 5 == 0)
			cout << endl;
	}
	cout << endl;
	cout << sumpar;
	f.close();
    return 0;

}
