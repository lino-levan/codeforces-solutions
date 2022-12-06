#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int anton = 0, danik = 0;

  for(int i = 0; i < n; i++) {
    char c;
    cin >> c;

    if(c == 'A') {
      anton++;
    } else {
      danik++;
    }
  }

  if(anton == danik) {
    cout << "Friendship";
  } else if(anton > danik) {
    cout << "Anton";
  } else {
    cout << "Danik";
  }

	return 0;
}