#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string n;
  cin >> n;

  cout << n;

  reverse(n.begin(), n.end());

  cout << n;

	return 0;
}