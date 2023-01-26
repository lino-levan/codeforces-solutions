#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int max, min, amazing = 0;
  cin >> max;
  min = max;

  for(int i = 0; i < n - 1; i++) {
    int cur;
    cin >> cur;

    if(cur < min) {
      amazing++;
      min = cur;
    }

    if(cur > max) {
      amazing++;
      max = cur;
    }
  }

  cout << amazing;
	return 0;
}