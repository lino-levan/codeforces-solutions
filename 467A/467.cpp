#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int potentialRooms = 0;

  for(int i = 0; i < n; i++) {
    int p, q;
    cin >> p;
    cin >> q;

    if(q-p >= 2) potentialRooms++;
  }

  cout << potentialRooms;

	return 0;
}