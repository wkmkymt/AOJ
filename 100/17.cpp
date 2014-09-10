/* How many ways */

#include <iostream>
using namespace std;

#define rep(i, a, b) for(int i = (a); i <= (b); i++)

int get_pattern(int, int);

int main()
{
  for(int n, x; cin >> n >> x && (n != 0 || x != 0);)
    cout << get_pattern(n, x) << endl;

  return 0;
}

int get_pattern(int n, int x)
{
  int pat = 0;
  rep(i, 1, n - 2)
    rep(j, i + 1, n - 1)
      rep(l, j + 1, n)
        if(i + j + l == x)
          pat++;
  return pat;
}
