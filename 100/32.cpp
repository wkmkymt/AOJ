#include <iostream>
#include <vector>
#include <string>
using namespace std;

void push(char);
void pop();

vector<char> stack(1000);

int main()
{
  for(string ins; cin >> ins && ins != "quit";) {
    if(ins == "push") {
      char c;
      cin >> c;
      push(c);
    }
    else if(ins == "pop")
      pop();
  }

  return 0;
}

void push(char c)
{
  stack.push_back(c);
}

void pop()
{
  char lastc = stack[stack.size() - 1];
  stack.pop_back();
  cout << lastc << endl;
}
