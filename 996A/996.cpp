#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  int total = 0;

  total += n / 100;
  n -= (n / 100) * 100;

  total += n / 20;
  n -= (n / 20) * 20;

  total += n / 10;
  n -= (n / 10) * 10;

  total += n / 5;
  n -= (n / 5) *5;

  total += n;
  n -= n;

  cout << total;

	return 0;
}