#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) cout << "\n";

    int a;
    cin >> a;

    if(360 % (180 - a) != 0) {
      cout << "NO";
      continue;
    }

    cout << "YES";
  }

	return 0;
}