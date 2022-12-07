#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  // create vector of coins, put all of the coins inside, and sort it
  vector<int> coins;
  coins.resize(n);
  for(int i = 0; i < n; i++) cin >> coins[i];
  sort(coins.begin(), coins.end());

  int coinsToTake = 1;

  while(true) {
    int mySum = 0, otherSum = 0;

    for(int i = 0; i < n; i++) {
      if(i > n - coinsToTake - 1) {
        mySum += coins[i];
      } else {
        otherSum += coins[i];
      }
    }

    if(mySum > otherSum) break;

    coinsToTake++;
  }

  cout << coinsToTake;

	return 0;
}