#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n;
  cin >> k;

  int max = 0;

  for(int i = 0; i < n; i++) {
    int cur;
    cin >> cur;

    if(k%cur == 0) {
      if(cur > max) {
        max = cur;
      }
    }
  }

  cout << k / max;

	return 0;
}