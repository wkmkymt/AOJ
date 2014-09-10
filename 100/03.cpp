/* Small, Large, or Equal */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b;
  string output;

  cin >> a >> b;
  if(a == b) output = "a == b";
  else if(a < b) output = "a < b";
  else if(a > b) output = "a > b";

  cout << output << endl;

  return 0;
}
