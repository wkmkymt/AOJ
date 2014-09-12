#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
  for(ll a, b; cin >> a >> b;) {
    ll gcd = __gcd(a, b);
    ll lcm = a * b / gcd;

    cout << gcd << " " << lcm << endl;
  }

  return 0;
}
