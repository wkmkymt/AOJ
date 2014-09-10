/* Toggling Cases */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string line;
  getline(cin, line);

  for(string::iterator c = line.begin(); c < line.end(); c++) {
    if(islower(*c))
      *c = toupper(*c);
    else
      *c = tolower(*c);
  }

  cout << line << endl;

  return 0;
}
