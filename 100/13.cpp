/* Print a Frame */

#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  for(int h, w; cin >> h >> w && (h != 0 || w != 0);) {
    REP(i, h) {
      REP(j, w) {
        if((i == 0 || i == h - 1) || (j == 0 || j == w - 1))
          cout << '#';
        else
          cout << '.';
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
