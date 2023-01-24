#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, m;
  cin >> n;
  cin >> m;

  for(int y = 0; y < n; y++) {
    if(y != 0) cout << "\n";

    for(int x = 0; x < m; x++) {
      if(y % 2 == 0) {
        cout << "#";
      } else if(y % 4 == 1 && x == m-1) {
        cout << "#";
      } else if(y % 4 == 3 && x == 0) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
  }


	return 0;
}