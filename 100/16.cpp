/* Greading */

#include <iostream>
using namespace std;

char get_result(int, int, int);

int main()
{
  for(int m, f, r; cin >> m >> f >> r && (m != -1 || f != -1 || r != -1);)
    cout << get_result(m, f, r) << endl;

  return 0;
}

char get_result(int a, int b, int c)
{
  int d = a + b;
  if(a == -1 || b == -1)
    return 'F';
  else if(d >= 80)
    return 'A';
  else if(d >= 65 && d < 80)
    return 'B';
  else if(d >= 50 && d < 65)
    return 'C';
  else if(d >= 30 && d < 50) {
    if(c >= 50)
      return 'C';
    return 'D';
  }
  else if(d < 30)
    return 'F';
}
