#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a, b;
  cin >> a;
  cin >> b;

  // ;)
  int daysWhereItIsPossibleToWearHipsterSocks = min(a,b);
  cout << daysWhereItIsPossibleToWearHipsterSocks << " ";
  a -= daysWhereItIsPossibleToWearHipsterSocks;
  b -= daysWhereItIsPossibleToWearHipsterSocks;

  cout << (a+b) / 2;

	return 0;
}