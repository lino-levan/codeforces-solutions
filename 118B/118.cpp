#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int rows = 2 * n + 1;

  for(int i = 0; i < rows; i++) {
    if(i != 0) cout << "\n";

    for(int c = 0; c < rows; c++) {
      int diff = n - abs(i - n);

      if(diff >= abs(c - n)) {
        if(c != 0) cout << " ";
        cout << diff - abs(c - n);
      } else if(diff - (c - n) > 0) {
        if(c != 0) cout << " ";
        cout << " ";
      }
    }
  }

	return 0;
}