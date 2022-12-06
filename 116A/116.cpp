#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int maxPassengers = 0;
  int passengers = 0;

  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a;
    cin >> b;

    passengers -= a;
    passengers += b;

    maxPassengers = max(maxPassengers, passengers);
  }

  cout << maxPassengers;

	return 0;
}