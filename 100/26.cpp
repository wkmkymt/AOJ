#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

double variance(int);

int main()
{
  for(int n; cin >> n && n != 0;)
    cout << fixed << variance(n) << endl;

  return 0;
}

double variance(int n)
{
  vector<double> s(n);
  double sum = 0;
  REP(i, n) {
    cin >> s[i];
    sum += s[i];
  }

  double m = sum / n;
  double a = 0;
  REP(i, n)
    a += pow(s[i] - m, 2) / n;

  return sqrt(a);
}
