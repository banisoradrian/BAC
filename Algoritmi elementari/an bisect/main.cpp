#include <iostream>

using namespace std;

int main()
{/*
    int an;
    cout<<"Introdu anul:" ; cin>>an;
    if((an % 4 == 0) && (an % 100 !=0))
    cout<<an<<" este an bisect";
    else if(an % 400 ==0){
        cout<<an<<" este an bisect";
    }
    else {
    cout<<an<<" nu este an bisect";
    }
*/
  int an;
 cin>>an;
    if((an % 4 == 0) && (an % 100 !=0))
    cout<<" Este an bisect";
    else if(an % 400 ==0){
        cout<<" Este an bisect";
    }
    else {
    cout<<" Nu este an bisect";
    }

    return 0;
}
