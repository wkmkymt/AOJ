#include <iostream>
using namespace std;

#define rep(i, a, b) for(int i = (a); i <= (b); i++)

int main()
{
  rep(i, 1, 9)
    rep(j, 1, 9)
      cout << i << "x" << j << "=" << i * j << endl;

  return 0;
}
