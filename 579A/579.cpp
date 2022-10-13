#include <iostream>

using namespace std;

int main()
{
  int x;
  cin >> x;

  // Ugly code for calculating bit length (order of magnitude faster than log function)
  unsigned bits, var = x;
  for(bits = 0; var != 0; ++bits) var >>= 1;

  int bacteria = 0;

  for(int i = 0; i < bits; i++) {
    bacteria += x % 2;
    x = x >> 1;
  }

  cout << bacteria;
	return 0;
}