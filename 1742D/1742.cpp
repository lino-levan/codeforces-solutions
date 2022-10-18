#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

bool hasValue(vector<int> &a, int find)
{
  for(int i = 0; i < a.size(); i++){
     if(a[i] == find) {
        return i;
     }
  }

  return -1;
}

void test()
{
  int n = 0;
  cin >> n;

  map<int, int> index;

  for(int i = 1; i <= 1000; i++) {
    index[i] = -1;
  }

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;

    index[temp] = i + 1;
  }
  int ans = -1;

  for(int i = 1; i <= 1000; i++) {
    for(int j = 1; j <= 1000; j++) {
      if(index[i] == -1 || index[j] == -1) {
        continue;
      }

      if(gcd(i, j) == 1) {
        ans = max(ans, index[i] + index[j]);
      }
    }
  }


  cout << ans;
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if (i != 0) {
      cout << "\n";
    }
    test();
  }

	return 0;
}