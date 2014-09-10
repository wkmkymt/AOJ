#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)
#define all(vec) vec.begin(), vec.end()

typedef long long ll;

int main()
{
  ll n;
  cin >> n;

  vector<ll> nums(n);
  REP(i, n)
    cin >> nums[i];
  sort(all(nums));

  REP(i, n) {
    cout << nums[i];
    if(i != n - 1)
      cout << " ";
  }
  cout << endl;

  return 0;
}
