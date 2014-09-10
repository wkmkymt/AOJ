/* Sum of Number */

#include <iostream>
#include <string>
using namespace std;

#define stoi(c) c -= '0'

int main()
{
  for(string num; cin >> num && num != "0";) {
    int sum = 0;
    for(string::iterator digt = num.begin(); digt < num.end(); digt++)
      sum += stoi(*digt);

    cout << sum << endl;
  }

  return 0;
}
