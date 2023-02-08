#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long n, x;
  cin >> n;
  cin >> x;

  vector<long long> factors;

  for(int i = 1; i <= min(n,x); i++) {
    if(x % i == 0) {
      factors.push_back(i);
    }
  }

  int count = 0;

  for(long long factor1: factors) {
    // check that both this number and the other one fit within n
    long long factor2 = x / factor1;

    if(factor1 <= n && factor2 <= n) {
      count++;
    }
  }

  cout << count;

	return 0;
}