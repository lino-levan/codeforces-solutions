#include <iostream>
#include <string>

using namespace std;

void test()
{
  int x, y;
  cin >> x;
  cin >> y;

  string s;
  cin >> s;

  int moves[] = {0, 0, 0, 0}; // U, D, R, L

  for(char c: s) {
    switch (c)
    {
      case 'U':
        moves[0]++;
        break;
      
      case 'D':
        moves[1]++;
        break;
      
      case 'R':
        moves[2]++;
        break;
      
      case 'L':
        moves[3]++;
        break;
    }
  }

  int curX = moves[2] - moves[3];
  int curY = moves[0] - moves[1];

  if(curX > x) {
    moves[2] -= curX - x;
  } else if(curX < x) {
    moves[3] -= x - curX;
  }

  if(curY > y) {
    moves[0] -= curY - y;
  } else if(curY < y) {
    moves[1] -= y - curY;
  }

  if(moves[0] < 0 || moves[1] < 0 || moves[2] < 0 || moves[3] < 0) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) cout << "\n";
    test();
  }

	return 0;
}