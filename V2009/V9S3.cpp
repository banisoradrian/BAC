#include <iostream>
#include <fstream>
using namespace std;
//initializam vector cu 3 cifre
//initializat global, toate elementele au valaorea 0 initial
int trei_cifre[1000];

int main(){
int n,i,primul_numar=0;
ifstream fib("d:\\FisiereCPP\\V9S3.txt");
//citim vectorul de elemente din bac
while(fib>>n){
//verificam daca numarul este de 3 cifre
if(n < 100)
cout<<"0";
if(n/1000==0&&n/100>0){
//daca acest numar este de 3 cifre, apare o data in sir
//pe pozitia respectiva in vector, marim valoarea de repetitie cu 1
trei_cifre[n]++;
}
}
//incepem sa trecem de la 999 in jos si ne uitam sa vedem de cate ori apare numarul
//daca numarul apare de 0 ori, nu apare deloc, deci il afisam pe ecran
//pana cand ajungem la 2 numere consecutive
for(i=999;i>=100;i--){
//daca primul numar deja a fost afisat si actualul nu apare
//afiseaza-l si iesi din recursivitate, deja avem cele 2 numere
if(primul_numar==1&&trei_cifre[i]==0){
cout<<i;
break;
}
else if(trei_cifre[i]==0){
cout<<i<<" ";
//acum afisam primul numar
primul_numar=1;
}
}
return 0;
}
