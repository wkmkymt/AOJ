/* Finding Missing Cards */

#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

#define M 4
#define N 13

enum Mark {Spade, Heart, Club, Dia};

int get_markIndex(char);

int main()
{
  char mark[M] = {'S', 'H', 'C', 'D'};
  bool card[M][N];

  REP(i, M)
    REP(j, N)
      card[i][j] = true;

  int n;
  cin >> n;
  REP(i, n) {
    char u_mark;
    int u_number;
    cin >> u_mark >> u_number;
    int mark_index = get_markIndex(u_mark);

    card[mark_index][u_number - 1] = false;
  }

  REP(i, M)
    REP(j, N)
      if(card[i][j])
        cout << mark[i] << " " << j + 1 << endl;

  return 0;
}

int get_markIndex(char c)
{
  switch(c) {
  case 'S': return Spade;
  case 'H': return Heart;
  case 'C': return Club;
  case 'D': return Dia;
  }
}
