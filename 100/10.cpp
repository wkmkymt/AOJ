/* Simple Calculator */

#include <iostream>
using namespace std;

int main()
{
  int a, b, ans;
  char op;
  for(; cin >> a >> op >> b && op != '?';) {
    switch(op) {
    case '+': ans = a + b; break;
    case '-': ans = a - b; break;
    case '*': ans = a * b; break;
    case '/': ans = a / b; break;
    }
    cout << ans << endl;
  }

  return 0;
}
