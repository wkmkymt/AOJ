#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  double rad_c = c * (M_PI / 180.0);

  double s, l, h;
  s = a * b * sin(rad_c) / 2;
  l = a + b + sqrt(a * a + b * b - 2 * a * b * cos(rad_c));
  h = 2 * s / a;

  cout << fixed << s << endl;
  cout << fixed << l << endl;
  cout << fixed << h << endl;

  return 0;
}
