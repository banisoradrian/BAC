#include <iostream>

using namespace std;

int main()
{
  int v[4] = {5, 2, 89, 1};
  int *p = v;
  p++;
  p++;
  *p = 13;
  p = &v[0];
  p = v + 2;
  *p = 89;
  p = v-1;
  *p = 22;
  for(int i = 0; i < 4; i++)
      cout << v[i] << " ";

return 0;
}
