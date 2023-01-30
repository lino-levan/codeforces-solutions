#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n;
  cin >> k;

  int minutesLeft = 240;

  for(int i = 0; i < n; i++) {
    int timeToSolve = (i+1) * 5;

    if(minutesLeft - timeToSolve < k) {
      cout << i;
      return 0;
    }

    minutesLeft -= (i+1) * 5;
  }

  cout << n;

	return 0;
}