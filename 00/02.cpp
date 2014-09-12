#include <iostream>
using namespace std;

int count_digits(int num)
{
  int digit;
  for(digit = 0; num > 0; digit++)
    num /= 10;

  return digit;
}

int main()
{
  for(int a, b; cin >> a >> b;)
    cout << count_digits(a + b) << endl;

  return 0;
}
