#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, k;
  cin >> n;
  cin >> k;

  vector<int> h;
  h.resize(n);

  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }

  vector<int> prefixSum;
  prefixSum.resize(n);

  for(int i = 0; i < n; i++) {
    prefixSum[i] = h[i];

    if(i != 0) {
      prefixSum[i] += prefixSum[i-1];
    }
  }

  unsigned long long min = 0xffffffffffffffff;
  int minIndex = -1;

  for(int i = k - 1; i < n; i++) {
    int height;
    if (i != k - 1) {
      height = prefixSum[i] - prefixSum[i-k];
    } else {
      height = prefixSum[i];
    }
  
    if(height < min) {
      min = height;
      minIndex = i - k + 2;
    }
  }

  cout << minIndex;

	return 0;
}