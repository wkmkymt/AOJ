/* Reversing Numbers */

#include <iostream>
using namespace std;

#define rep(i, a, b) for(int i = a; i <= (b); i++)
#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  int n, a[100];
  cin >> n;
  REP(i, n)
    cin >> a[i];

  rep(i, 1, n) {
    cout << a[n - i];
    if(i != n)
      cout << " ";
  }
  cout << endl;

  return 0;
}
