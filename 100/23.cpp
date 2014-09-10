/* Shuffle */

#include <iostream>
#include <string>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

void shuffle(string&);

int main()
{
  for(string word; cin >> word && word != "-";) {
    int m;
    cin >> m;
    REP(i, m)
      shuffle(word);

    cout << word << endl;
  }

  return 0;
}

void shuffle(string &word)
{
  int h;
  cin >> h;

  string left = word.substr(0, h), right = word.substr(h, word.size()); // Ê¬²ò
  word = right + left;
}
