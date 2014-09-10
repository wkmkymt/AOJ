/* Counting Characters */

#include <iostream>
#include <string>
using namespace std;

#define RET(i, n) for(int i = 0; i < (n); i++)

int main()
{
  int alp_count[26] = {0};
  char c;
  while(cin >> c)
    if(isalpha(c))
      alp_count[tolower(c) - 'a']++;

  RET(i, 26)
    cout << (char)(i + 'a') << " : " << alp_count[i] << endl;

  return 0;
}
