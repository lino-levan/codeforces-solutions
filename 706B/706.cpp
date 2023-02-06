#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  vector<long long> prices;
  prices.resize(n);

  for(long long i = 0; i < n; i++) {
    cin >> prices[i];
  }

  sort(prices.begin(), prices.end());

  long long q;
  cin >> q;

  for(long long i = 0; i < q; i++) {
    long long money;
    cin >> money;

    if(money < prices[0]) {
      cout << 0 << "\n";
      continue;  
    }

    // Binary search to find the optimal pricing or whatever
    long long low = 0;
    long long high = n;

    while(low < high) {
      int mid = (low + high) / 2;

      if(prices[mid] <= money && (mid == n-1 || prices[mid+1] > money)) {
        low = mid;
        break;
      } else if(prices[mid] <= money) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    cout << low + 1 << '\n';
  }

	return 0;
}