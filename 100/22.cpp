/* Finding a Word */

#include <iostream>
#include <string>
#include <algorithm> // transform()
using namespace std;

#define stolower(str) transform(str.begin(), str.end(), str.begin(), ::tolower) // or ::toupper

int main()
{
  string target;
  cin >> target;
  stolower(target);

  int count = 0;
  for(string word; cin >> word && word != "END_OF_TEXT";) {
    stolower(word);
    if(word == target)
      count++;
  }

  cout << count << endl;

  return 0;
}
