#include <iostream>
#include <cmath>

using namespace std;

void test()
{
  long long x, y, k;
  cin >> x;
  cin >> y;
  cin >> k;

  long long w = k % (x - 1);

  if (w != 0) {
    w = x-1-(k%(x-1));
  }

  long long sticks = ceil(k/(long double) (x-1));
  long long stones = ceil((y*k-1-w)/(long double)(x-1));

  cout << sticks + stones + k;
}

int main()
{
  cout.precision(100);

  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if (i != 0) cout << "\n";
    test();
  }
	return 0;
}