/* Print a Rectangle */

#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  for(int h, w; cin >> h >> w && (h != 0 || w != 0);) {
    REP(i, h) {
      REP(j, w)
        cout << '#';
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
