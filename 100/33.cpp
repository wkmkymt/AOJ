#include <iostream>
#include <string>
#include <vector>
using namespace std;

void push(int, char);
char pop(int);
void move(int, int);

vector< vector<char> > stacks(0, vector<char> (1000));

int main()
{
  int n;
  cin >> n;
  stacks.resize(n);

  for(string ins; cin >> ins && ins != "quit";) {
    int p;
    cin >> p;

    if(ins == "push") {
      char c;
      cin >> c;
      push(p - 1, c);
    }
    else if(ins == "pop")
      cout << pop(p - 1) << endl;
    else if(ins == "move") {
      int q;
      cin >> q;
      move(p - 1, q - 1);
    }
  }

  return 0;
}

void push(int p, char c)
{
  stacks[p].push_back(c);
}

char pop(int p)
{
  char lastc = stacks[p][stacks[p].size() - 1];
  stacks[p].pop_back();
  return lastc;
}

void move(int p, int q)
{
  char lastc = pop(p);
  push(q, lastc);
}
