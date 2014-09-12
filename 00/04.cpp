#include <iostream>
using namespace std;

int main()
{
  double a, b, c, d, e, f;
  while(cin >> a >> b >> c >> d >> e >> f) {
    double x = (c * e - b * f) / (a * e - b * d);
    double y = (c * d - a * f) / (b * d - a * e);

    if(x == 0) x = 0;
    if(y == 0) y = 0;

    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}
