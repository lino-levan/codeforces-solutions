#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int index = 0;

  for(int i = 0; i < 25; i++) {
    int temp;
    cin >> temp;

    if(temp == 1) {
      index = i;
      break;
    }
  }

  int x = index / 5;
  int y = index % 5;

  cout << abs(2-x) + abs(2-y);

	return 0;
}