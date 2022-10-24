#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a;
  cin >> b;

  int hours = 0;
  int burntCandles = 0;

  while(a > 0) {
    hours += a;
    burntCandles += a;
    // cout << "added " << a << "\n";
    a = 0;

    while(burntCandles >= b) {
      a += 1;
      burntCandles -= b;
    }
  }

  cout << hours;

	return 0;
}