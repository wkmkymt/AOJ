/* Print a Chessboard */

#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

bool check_even(int);
void print_mark(int, int);

int main()
{
  for(int h, w; cin >> h >> w && (h != 0 || w != 0);) {
    REP(i, h) {
      REP(j, w)
        print_mark(i, j);
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}

bool check_even(int x)
{
  return x % 2;
}

void print_mark(int a, int b)
{
  char mark;
  if(!check_even(a)) {
    if(!check_even(b)) mark = '#';
    else mark = '.';
  }
  else {
    if(!check_even(b)) mark = '.';
    else mark = '#';
  }
  cout << mark;

  return;
}
