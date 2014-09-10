#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

int main()
{
  int n;
  cin >> n;

  int tpoint = 0, hpoint = 0;
  REP(i, n) {
		string tstr, hstr;
    cin >> tstr >> hstr;
    if(tstr == hstr) {
      tpoint += 1;
      hpoint += 1;
    }
    else if(tstr >= hstr)
      tpoint += 3;
    else if(hstr >= tstr)
      hpoint += 3;
  }

  cout << tpoint << " " << hpoint << endl;

  return 0;
}
