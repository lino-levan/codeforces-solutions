#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test()
{
  long long n;
  cin >> n;

  vector<long long> a;
  a.resize(n);

  long long negatives = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];

    if(a[i] < 0) {
      negatives++;
    }
  }

  for(int i = 0; i < n; i++) {
    if(i < negatives) {
      a[i] = -abs(a[i]);
    } else {
      a[i] = abs(a[i]);
    }
  }

  
  for(int i = 1; i < n; i++) {
    if(a[i] < a[i-1]) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0 ) {
      cout << "\n";
    }
    test();
  }

	return 0;
}