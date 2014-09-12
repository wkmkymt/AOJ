#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define all(vec) vec.begin(), vec.end()

int main()
{
  array<int, 10> mountains;

  for(auto &mountain : mountains)
    cin >> mountain;
  sort(all(mountains), greater<int>());

  rep(i, 3)
    cout << mountains[i] << endl;

  return 0;
}
