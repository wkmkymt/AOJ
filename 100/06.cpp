/* Print Test Cases */

#include <iostream>
using namespace std;

int main()
{
  for(int i = 1, x; cin >> x && x != 0; i++)
    cout << "Case " << i << ": " << x << endl;

  return 0;
}
