#include <iostream>
#include <bitset>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  bitset<10000001> flag;
  int n, tmp, count = 0;

  cin >> n;
  REP(i, n) {
    cin >> tmp;
    flag[tmp] = true;
  }

  cin >> n;
  REP(i, n) {
    cin >> tmp;
    count += flag[tmp];
  }

  cout << count << endl;

  return 0;
}
