/* Circle */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double r;
  cin >> r;

  cout << fixed << M_PI * r * r << " " << fixed << 2 * M_PI * r << endl;

  return 0;
}
