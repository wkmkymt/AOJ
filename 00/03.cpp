#include <iostream>
#include <array>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define all(vec) vec.begin(), vec.end()

inline bool isRightTriangle(int x, int y, int z)
{
  return pow(x, 2) + pow(y, 2) == pow(z, 2);
}

int main()
{
  int n;
  cin >> n;
  rep(i, n) {
    array<int, 3> v;
    cin >> v[0] >> v[1] >> v[2];
    sort(all(v));
    cout << (isRightTriangle(v[0], v[1], v[2]) ? "YES" : "NO") << endl;
  }

  return 0;
}
