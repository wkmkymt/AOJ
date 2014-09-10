/* Finding Minimum String */

#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  int n;
  cin >> n;

  string str;
  cin >> str; // tmp0
  REP(i, n - 1) {
    string tmp;
    cin >> tmp;
    if(tmp < str)
      str = tmp;
  }

  cout << str << endl;

  return 0;
}
