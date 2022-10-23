#include <iostream>
#include <algorithm>

using namespace std;

void test()
{
  int c, m, x;
  cin >> c;
  cin >> m;
  cin >> x;

  int teams = 0;

  while(true) {
    int safeTake = min(c, min(m, x));

    // take as many as possible, safely
    teams += safeTake;
    c -= safeTake;
    m -= safeTake;
    x -= safeTake;

    // send people to x if needed
    if(safeTake == 0 && x == 0 && c+m+x >= 3) {
      // if c and m are not the same, take some from the higher one
      if(c != m) {
        if(c > m) {
          x = c - m;
          c = m;
        } else if(m > c) {
          x = m - c;
          m = c;
        }
      } else {
        // otherwise, take from both of them
        int optimalTake = (c + m)/3;
        c = optimalTake;
        m = optimalTake;
        x = optimalTake;
      }
      continue;
    }

    if(safeTake == 0) {
      break;
    }
  }
  cout << teams;
}

int main()
{
  int q;
  cin >> q;

  for(int i = 0; i < q; i++) {
    if(i != 0 ) {
      cout << "\n";
    }
    test();
  }

	return 0;
}