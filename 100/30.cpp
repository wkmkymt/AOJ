#include <iostream>
#include <vector>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> S(n);
  REP(i, n)
    cin >> S[i];

  int q;
  cin >> q;
  vector<int> T(q);
  REP(i, q)
    cin >> T[i];

  int count = 0;
  for(vector<int>::iterator t = T.begin(); t < T.end(); t++)
    for(vector<int>::iterator s = S.begin(); s < S.end(); s++)
      if(*t == *s) {
        count++;
        break;
      }

  cout << count << endl;

  return 0;
}
