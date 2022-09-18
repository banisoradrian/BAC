#include    <iostream>

using namespace std;
const int N = 10;
int main()
{
    int v[N] = {12, 52, 53, 124, 64, 84, 86, 92, 95, 29};
    int maxim , minim;
    for(int i = 0; i < N; i++)
    {
        if(v[i] > maxim)
            maxim = v[i];
        if(v[i] < minim)
            minim = v[i];
    }
    cout << "Numarul maxim din sir este: " << maxim << "\n";
    cout << "Numarul minim din sir este: " << minim;

    
    return 0;
}
