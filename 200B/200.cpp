#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int result = 0;

  for(int i = 0; i < n; i++) {
    int p;
    cin >> p;

    result += p;
  }

  cout.precision(10);

  cout << (double) result / n;

	return 0;
}