#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;
  cin >> n;
  cin >> m;

  int curPos = 1;
  long long timer = 0;

  for(int i = 0; i < m; i++) {
    int houseToGetTo;
    cin >> houseToGetTo;

    if(houseToGetTo == curPos) {
      continue;
    }

    if(houseToGetTo < curPos) {
      timer += n - curPos;
      timer += 1;
      curPos = 1;
    }

    if(houseToGetTo > curPos) {
      timer += houseToGetTo - curPos;
      curPos = houseToGetTo;
      continue;
    }
  }

  cout << timer;

	return 0;
}